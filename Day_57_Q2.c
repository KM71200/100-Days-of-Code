#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode *left, *right;
};

struct TreeNode* newNode(int val) {
    struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    node->val = val;
    node->left = node->right = NULL;
    return node;
}

struct TreeNode* buildTree(int arr[], int n) {
    if (n == 0 || arr[0] == -1) return NULL;

    struct TreeNode* root = newNode(arr[0]);

    struct TreeNode* q[n];
    int front = 0, rear = 0;

    q[rear++] = root;
    int i = 1;

    while (i < n) {
        struct TreeNode* curr = q[front++];

        if (i < n && arr[i] != -1) {
            curr->left = newNode(arr[i]);
            q[rear++] = curr->left;
        }
        i++;

        if (i < n && arr[i] != -1) {
            curr->right = newNode(arr[i]);
            q[rear++] = curr->right;
        }
        i++;
    }

    return root;
}

void flatten(struct TreeNode* root) {
    struct TreeNode* curr = root;

    while (curr != NULL) {
        if (curr->left != NULL) {
            struct TreeNode* temp = curr->left;

            while (temp->right != NULL) {
                temp = temp->right;
            }

            temp->right = curr->right;
            curr->right = curr->left;
            curr->left = NULL;
        }
        curr = curr->right;
    }
}

void printList(struct TreeNode* root) {
    struct TreeNode* curr = root;
    while (curr != NULL) {
        printf("%d ", curr->val);
        curr = curr->right;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    struct TreeNode* root = buildTree(arr, n);

    flatten(root);

    printList(root);

    return 0;
}