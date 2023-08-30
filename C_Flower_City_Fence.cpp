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
void solve(){
    int n;cin >> n;
    vi arr(n);
    multiset<int> sett;
    REP(i,0,n){
        cin >> arr[i];
        sett.insert(arr[i]);
    }

    int curr = n;
    for (int i = 1; i <= n; i++){
        if (arr[i - 1] != sett.size()){
            cout <<"NO"<< endl;
            return;
        }
        sett.erase(i);
    }
    cout << "YES" << endl;
}
int main(){
    int t;cin >> t;
    while (t--) solve();
}