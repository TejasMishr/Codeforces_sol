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
int main (){ 
  ll t;
  cin>>t;
  while(t--){
    
    long long L, V1, V2;
    cin >> L >> V1 >> V2;

    ll tt = L / V1 + (L % V1 == 0 ? 0 : 1);
    ll ht = L / V2 + (L % V2 == 0 ? 0 : 1);

    // cout<<tt<<endl;
    // cout<<"ht "<<ht<<endl;

    
    long long max_time = tt - ht - 1;

   
    if (max_time >= 0) cout << max_time << endl;
    else cout << -1 << endl;
    

  }
  return 0;
}