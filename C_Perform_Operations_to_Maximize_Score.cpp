#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>
#define mp make_pair
#define F first
#define S second
#define all(a) (a).begin(), (a).end()
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define print(x) cout<<x<<endl;

void sol(){
    ll n, k;
    cin >> n >> k;
    vll a(n);
    vll b(n);

    for(auto &x : a) cin >> x;
    for(auto &x : b) cin >> x;

    priority_queue<ll> pq;

    for(ll i = 0; i < n; ++i) {
        if(b[i] == 1) {
            pq.push(a[i]);
        }
    }

    while(k-- && !pq.empty()) {
        ll top = pq.top();
        pq.pop();
        top += 1;
        pq.push(top);
    }

    for(ll i = 0; i < n; ++i) {
        if(b[i] == 1 && !pq.empty()) {
            a[i] = pq.top();
            pq.pop();
        }
    }

    sort(all(a));
    ll median = a[(n-1)/2];
    ll result = LLONG_MIN;

    for(ll i = 0; i < n; ++i) {
        ll current = a[i] + median;
        result = max(result, current);
    }

    print(result);
}

int main(){
    fast;
    ll t;
    cin >> t;
    while(t--){
        sol();
    }
    return 0;
}
