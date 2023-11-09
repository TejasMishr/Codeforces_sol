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
int main() { 
  
    int t;cin >> t; 
    while(t--) { 
       int n;cin>>n; 
    int arr[n]; 
    REP(i,0,n) cin>>arr[i]; 
    map<int, int> freq; 
    REP(i,0,n) freq[arr[i]]++; 
    int rpt = 0; 
    for(auto x: freq) if(x.second > 1) rpt++; 
     if(rpt <= 1) cout<<-1<<endl; 
    else { 
        vi selectt; 
        for(auto x: freq) { 
            if(x.second > 1) { 
                selectt.push_back(x.first); 
                if(selectt.size()==2) break; 
            } 
        }
        int first = selectt[0], sec = selectt[1]; 
        map<int, int> vall; 
        vall[first] = 1;
        vall[sec] = 2; 
        for(int i=0; i<n; i++){ 
            if(arr[i]==first) { 
                cout<<vall[first]<<" "; 
                vall[first] = 3 - vall[first]; 
            } 
            else if(arr[i]==sec) { 
                cout<<vall[sec]<<" "; 
                vall[sec] = 5 - vall[sec]; 
            } 
            else cout<<1<<" "; 
            
        } 
        cout<<endl; 
    }
    } 
    return 0;
}