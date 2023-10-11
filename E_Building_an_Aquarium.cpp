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
#define REP(i,a,b) for (long long i = a; i< b; i++)
#define all(a) (a). begin(), (a).end()
#define fast ios_bfse::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007;
int main() {
    int t;cin>>t;
    while (t--){
        ll n,m;cin>>n>>m;
        ll arr[n]; 
        REP(i,0,n) cin>>arr[i]; 
        ll low=0, high=INT_MAX, res = -1, tot; 
    while (low <= high){ 
        ll mid = (low + high) / 2; 
        tot = 0; 
        REP(i,0,n) if (mid>arr[i]) tot += (mid - arr[i]); 
        if (tot <= m){
            res = mid; 
            low = mid + 1; 
        }
        else high=mid - 1; 
        
    }
    cout <<res<< endl; 
    }
    
    return 0;
}