#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<long long>
#define REP(i, a, b) for (int i = a; i < b; ++i)

void solve() {
    ll n;
    cin>>n;
    vll a(n+1),b(n+1);
    map<ll,set<ll>>md;
    f1(i,1,n){
        cin>>a[i];
    }
    f1(i,1,n){
        cin>>b[i];
    }
    ll m;
    cin>>m;
    vll d(m+1);
    f1(i,1,m){
        cin>>d[i];
        md[d[i]].insert(i);
    }
    ll lst=0;
    f1(i,1,n){
        if(a[i]!=b[i]){
            if(md.find(b[i])==md.end()){
                cout<<"no"<<endl;
                return;
            }
            else{
                auto it=(--md[b[i]].end());
                lst=max(lst,* it);
                md[b[i]].erase(it);
                if(md[b[i]].size()==0){
                    md.erase(b[i]);
                }
            }
        }
    }
    f1(i,1,n){
        if(md.find(b[i])!=md.end()){
            auto it=(--md[b[i]].end());
            lst=max(lst,*it);
            md[b[i]].erase(it);
            if(md[b[i]].size()==0){
                md.erase(b[i]);
            }
        }
    }
    if(lst==m){
        cout<<"yes"<<endl;
        return;
    }
    else{
        cout<<"no"<<endl;
        return;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
