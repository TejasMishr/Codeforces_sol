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
#define print(x) cout<<x<<endl;
#define REP(i,a,b) for ( int i = a; i < b; i++)
#define all(a) (a).begin(), (a).end()
#define fast ios_bfse::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007;
int main(){
    ll t; cin>>t;
    while(t--){
        int n;cin>> n;
        string s;cin >> s; 
        unordered_map<char, int> m;
        int maxi = 0;
        for(auto &i: s){
            m[i]++; 
            maxi = max(mx, m[i]);
        }
        int len = maxi - (n-maxi);
        if(n%2==1) l = 1;
        if(l < 0) l = 0;
        cout << l;
    }
    return 0;
}

