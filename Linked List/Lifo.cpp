#include <stdio.h> 
#include<stdlib.h> 
struct node {
    int val;
    struct node *nxt;
}
;
int main()
{
    struct node *p, *q = NULL;
    char ch = 'y';
    int n = 1;
    while (ch == 'y')
    {
        printf("Want to create node:y/n:");
        scanf(" %c", &ch);
        if (ch != 'y')
            break;
        printf("Node%d:", n++);

        //creating node
        p = (struct node *)malloc(sizeof(struct node)); 
        scanf("%d", &p->val); //pointing address to val
        p->nxt = q; //assigning pointer from p to q  i.e next 
        q = p; //pointer shifting to next 
    }
    n--; 
    printf("Traversal of created linked list elements\n");
    while (p != NULL){
        printf("Node%d:%d\n", n--, p->val); //traversing list
        p = p->nxt;
    }
    return 0;
}