/*Add two*/

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};


struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}


struct Node* addTwoNumbers(struct Node* l1, struct Node* l2) {
    struct Node dummy;        
    dummy.next = NULL;
    
    struct Node* temp = &dummy;
    int carry = 0;

    while (l1 != NULL || l2 != NULL || carry != 0) {
        int sum = carry;

        if (l1 != NULL) {
            sum += l1->data;
            l1 = l1->next;
        }

        if (l2 != NULL) {
            sum += l2->data;
            l2 = l2->next;
        }

        carry = sum / 10;

        struct Node* newNode = createNode(sum % 10);
        temp->next = newNode;
        temp = temp->next;
    }

    return dummy.next;
}


void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
}


struct Node* insertEnd(struct Node* head, int value) {
    struct Node* newNode = createNode(value);

    if (head == NULL)
        return newNode;

    struct Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    return head;
}

int main() {
    int n1, n2, value;
    struct Node *l1 = NULL, *l2 = NULL;

  
    scanf("%d", &n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &value);
        l1 = insertEnd(l1, value);
    }

  
    scanf("%d", &n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &value);
        l2 = insertEnd(l2, value);
    }

    struct Node* result = addTwoNumbers(l1, l2);

    printList(result);

    return 0;
}