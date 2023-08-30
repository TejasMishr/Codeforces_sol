#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* head = NULL; // Initialize head pointer to NULL
struct node* tail = NULL; // Initialize tail pointer to NULL

void createnode(int val) {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    if (head == NULL) {
        head = temp;
        tail = temp;
    } else {
        tail->next = temp;
        tail = temp;
    }
}

int len() {
    int count = 0;
    struct node* curr = head;
    while (curr != NULL) {
        count++;
        curr = curr->next;
    }
    return count;
}

// Method 1 (by traversing linked list)
struct node* middle(struct node* head) {
    if (head == NULL)
        return NULL;
    
    struct node* temp = head;
    struct node* mid = head;
    while (temp != NULL && temp->next != NULL) {
        mid = mid->next;
        temp = temp->next->next;
    }
    return mid;
}

int main() {
    int n;
    printf("Enter the Total Length : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        createnode(x);
    }
    
    int length = len();
    printf("Length of linked list : %d\n", length);
    
    struct node* mid1 = middle(head);
    if (mid1 != NULL)
        printf("Middle element : %d\n", mid1->data);
    else
        printf("The linked list is empty.\n");

    return 0;
}
