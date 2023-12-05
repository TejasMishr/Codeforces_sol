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
#define mp make_pair
#define len(s) (int)s.size()
#define print(x) cout<<x<<endl;
#define REP(i,a,b) for ( int i = a; i < b; i++)
#define all(a) (a).begin(), (a).end()
#define fast ios_bfse::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007;



bool can(vector<pair<int, int>>& seg, int k) {
    int n = seg.size();
    int mini = 0, maxi = 0;

    REP(i,0,n){
        maxi = min(maxi + k, seg[i].second);
        mini = max(mini, seg[i].first);
        if (mini > maxi) return false;
        mini = max(mini - k, 0);
    }
    return true;
}

int miniK(vector<pi> &seg) {
    int low = 0, high = 1e9;
    while (low < high) {
        int mid= low+(high-low)/2;
        if (can(seg, mid)) high = mid;
        else low = mid + 1;
    }
    return low;
}



int main(){
    ll t; cin>>t;
    while (t--) {
        int n;cin >> n;
        vector<pi> seg(n);
        REP(i,0,n) cin>>seg[i].first>>seg[i].second;
        int res=miniK(seg);
        cout <<res<< endl;
    }
  return 0;
}