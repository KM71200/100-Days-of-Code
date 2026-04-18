/**/
#include <stdlib.h>
#include <string.h>

// Adjacency list node
typedef struct Node {
    int val;
    struct Node* next;
} Node;

// Globals for DFS
static int* disc;
static int* low;
static int  timer_g;
static Node** adj;

// Result storage
static int** result;
static int   resultSize;

void addEdge(int u, int v) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->val  = v;
    node->next = adj[u];
    adj[u]     = node;
}

void dfs(int u, int parent) {
    disc[u] = low[u] = timer_g++;

    for (Node* cur = adj[u]; cur; cur = cur->next) {
        int v = cur->val;

        if (v == parent) continue;   // skip the edge we came from

        if (disc[v] == -1) {         // tree edge: v not yet visited
            dfs(v, u);
            // pull up the lowest reachable time from v's subtree
            if (low[v] < low[u]) low[u] = low[v];

            // Bridge condition
            if (low[v] > disc[u]) {
                result[resultSize]    = (int*)malloc(2 * sizeof(int));
                result[resultSize][0] = u;
                result[resultSize][1] = v;
                resultSize++;
            }
        } else {                     // back edge: v already visited
            if (disc[v] < low[u]) low[u] = disc[v];
        }
    }
}

int** criticalConnections(int n,
                          int** connections, int connectionsSize,
                          int* connectionsColSize,
                          int* returnSize, int** returnColumnSizes) {

    // --- Build adjacency list ---
    adj = (Node**)calloc(n, sizeof(Node*));

    for (int i = 0; i < connectionsSize; i++) {
        int u = connections[i][0], v = connections[i][1];
        addEdge(u, v);
        addEdge(v, u);
    }

    // --- Init DFS arrays ---
    disc = (int*)malloc(n * sizeof(int));
    low  = (int*)malloc(n * sizeof(int));
    memset(disc, -1, n * sizeof(int));
    timer_g    = 0;

    // --- Allocate result (at most connectionsSize bridges) ---
    result     = (int**)malloc(connectionsSize * sizeof(int*));
    resultSize = 0;

    // --- Run DFS (graph is connected per problem statement) ---
    dfs(0, -1);

    // --- Fill output size parameters ---
    *returnSize        = resultSize;
    *returnColumnSizes = (int*)malloc(resultSize * sizeof(int));
    for (int i = 0; i < resultSize; i++)
        (*returnColumnSizes)[i] = 2;

    // --- Free adjacency list ---
    for (int i = 0; i < n; i++) {
        Node* cur = adj[i];
        while (cur) { Node* tmp = cur->next; free(cur); cur = tmp; }
    }
    free(adj);
    free(disc);
    free(low);

    return result;
}
