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
    int t;
    cin >> t;

    while (t--) {
        int x,y,z;cin>>x>>y>>z;
        int mini = min({x, y, z});
        bool chk =true;
        int tot=0;
        if (x % mini != 0 || y % mini != 0 || z % mini != 0) chk=false;
        else {
            while (x != mini) {
                if (x % mini != 0 || tot > 3) {
                    chk =false;
                    break;
                }
                x -=mini;
                tot++;
            }

            while (y !=mini) {
                if(y % mini != 0 || tot > 3) {
                    chk = false;
                    break;
                }
                y -=mini;
                tot++;
            }

            while (z != mini) {
                if (z % mini != 0 || tot > 3) {
                    chk =false;
                    break;
                }
                z -=mini;
                tot++;
            }
        }

        if(chk && tot <= 3) cout<<"YES"<< endl;
        else cout <<"NO"<< endl;
        
    }

    return 0;
}