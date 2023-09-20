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
    
    int n,h;
    cin >>n>>h;
    int arr[n];
    int sum = 0;

    REP(i,0,n) {
        cin>>arr[i];
        sum+=arr[i];
    }

    int l=0, r=sum;
    while (r-l >= 1) {
        int mid = (l + r)/2;
        int high = h;
        bool b = true;

        REP(i,0,n) {
            if (arr[i] > mid) high -= arr[i];
            if (high<=0 && arr[i]>mid) {
                b = false;
                break;
            }
        }
        if (b) r = mid;
        else l = mid + 1;
        
    }


    cout <<r<<endl;

}

  
  return 0;
}