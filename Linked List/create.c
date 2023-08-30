#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* head = NULL; // Initialize head pointer to NULL
struct node* tail = NULL; // Initialize tail pointer to NULL

//<<<<<--------------------------------------------------------------------------------------->>>>>>

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

//<<<<<--------------------------------------------------------------------------------------->>>>>>

void PrintList(){   // Code to print the linked list In FIFO
    struct node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

//<<<<<--------------------------------------------------------------------------------------->>>>>>
 
void Reverse(){   // Code to print the linked list In FIFO
    
    struct node *currentnode,*prevnode,*nxtnode;
    prevnode=0;
    currentnode=nxtnode=head;

    while (nxtnode != NULL) {
        nxtnode=nxtnode->next;
        currentnode->next=prevnode;
        prevnode=currentnode;
        currentnode=nxtnode;
    }
    head=prevnode;
    
}

//<<<<<--------------------------------------------------------------------------------------->>>>>>


void InsertBegin(){
    struct node *newNode;
    newNode = malloc(sizeof(struct node));
    int newdata;
    printf("Enter the Data to insert in begining : ");scanf("%d",&newdata);
    newNode->data = newdata;
    newNode->next = head;
    head = newNode;
}

//<<<<<--------------------------------------------------------------------------------------->>>>>>

void InsertEnd(){
    struct node *newNode;
    newNode = malloc(sizeof(struct node));
    int newdata;
    printf("Enter the Data of Node to insert at End : ");scanf("%d",&newdata);
    newNode->data = newdata;
    newNode->next = NULL;
    tail->next = newNode;
}

//<<<<<--------------------------------------------------------------------------------------->>>>>>

int len(){
    int count=0;
    struct node* current = head;
    while(current != NULL){
        count++;
        current=head->next;
    }
    return count;
}

//<<<<<--------------------------------------------------------------------------------------->>>>>>

//Method 1 (by traversing linked list : )

void middle1(int l){
    int count=0,ans;
    int mid;
    if (l%2==0) mid=l/2;
    else mid= l/2 + 1;
    struct node* current = head;
    while(count != mid){
        current = head->next;
        ans=current->data;
        count++;

    }
    printf("%d",ans);
}

// Menthod 2 (by converting linked list into array ):
void middle2(int l){
    int x=0;
    printf("length l %d ",l);printf("\n");
    struct node* current = head;
    int temp[l];


    while (current != NULL) {
        temp[x++]=head->data;
        printf("temp  %d ",current->data);
        current = head->next;
    }


    for(int i=0;i<l;i++){
        printf("%d ",temp[i]);
    }

    printf("\n");

    if(x%2==0) printf("%d",temp[(l/2)]);
    else printf("%d",temp[(l/2 + 1)]);

}





//<<<<<--------------------------------------------------------------------------------------->>>>>>

int main() {
    int n;
    // printf("Enter the Total Length : ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x); // Pass the address of 'x' using '&'
        createnode(x);
        
    }
    InsertBegin();
    InsertEnd();
    printf("List In FIFO : "); PrintList();

    
    printf("\nList in LIFO : ");
    Reverse();
    PrintList();
    printf("\n");
    int length=len();
    printf("Length of linked list : %d",length);
    printf("\n");

    middle1(length); // -- > BUG
    // middle2(length); //--- > Bug
    
    
    
    

    return 0;
}
