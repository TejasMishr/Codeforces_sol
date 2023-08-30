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
int main ()
{ 
  ll t;
  cin>>t;
  while(t--){
    ll n,k;
    cin>>n>>k;
    vector<long long > vec(n);
    for(ll i=0;i<n;i++) cin>>vec[i];
    sort(vec.begin(),vec.end());
    vector<long long> diff(n-1);
    for(ll i=0;i<n-1;i++) diff[i]=vec[i+1]-vec[i];
    int count=0,maxi=0;
    for(ll j=0;j<n-2;j++){
        if(diff[j+1]==diff[j]) {
        count++;
        maxi=max(maxi,count);
        }
        else count=0;
    }
    cout<<maxi<<endl;

    
      

  }
  return 0;
}