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
int main() {
    ll t;cin>>t;
    vi cnt(32,0);
     while (t--) {
        int tt,v;cin>>tt>>v;
        if (tt == 1) cnt[v]++;
        else{
            int b=0;
            vi temp=cnt;
            bool chk=true;
            while (b<30) {
                if ((v>>b)&1) {
                    chk = (temp[b] > 0);
                    if(chk) temp[b]--;
                    else break;
                }
                temp[b+1] += temp[b]/2;
                // cout<<temp[b+1]<<" "<<temp[b]<<" "<<endl;
                b++;
            }
            cout<<(chk ? "YES":"NO")<<endl;
        }
    }

    return 0;
}