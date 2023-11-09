//----------------> JAI SHREE RAM <------------- //
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
    int key;
    node *left;
    node *right;
    node (int k){
        key=k;
        left=right=NULL;
    }
};


int main (){ 
    node *root = new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
    cout<<"Inserted Succesfully";
    return 0;
}