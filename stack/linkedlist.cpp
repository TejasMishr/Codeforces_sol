// Header Files and namespaces
#include<bits/stdc++.h>
using namespace std;
// Code Shortners
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define pb push_back
#define mp make_ pair
#define len(s) (int)s.size()
#define print(x) cout<<x<<'\n'
#define REP(i,a,b) for ( int i = a; i< b; i++)
#define all(a) (a). begin(), (a).end()
#define fast ios_bfse::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007;


struct node{
    int data;
    struct node *next;
}
*top=NULL;
void push(int val){
     struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    if(top==NULL) newnode->next=NULL;
    else newnode->next=top;

    top=newnode;
    cout<<"Successful Insertion"<<endl;
    
}
void pop(){
    if (top==NULL) cout<<"Empty Stack"<<endl;
    else{
        struct node *temp=top;
        cout<<"Element deleted: "<<temp->data<<endl;
        top=temp->next;
        free(temp);
       
    }
}


void peek(){
    if(top==NULL) cout<<"Emplty Stack"<<endl;
    
    else {
        struct node *temp=top;
        cout<<"peek element: "<<temp->data<<endl;
    }
}
void display(){
    if (top==NULL) cout<<"Empty Stack"<<endl;
    struct node *temp=top;
    while(temp->next!=NULL) {
        cout<<"data : "<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<"data : "<<temp->data<<endl;

}


int main (){
    int n;
    cin>>n;
    while(n--){
        int val;cin>>val;
        push(val);
    }
    
     
     peek();
     display();
     pop();
     display();
     peek();
  
  return 0;
}