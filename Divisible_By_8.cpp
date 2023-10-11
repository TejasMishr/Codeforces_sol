// Header Files and namespaces
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define add push_back
#define nl "\n"
#define vec vector<ll>
#define pairll pair<ll,ll>
#define getsize(x) ((ll) x.size())
#define iterate(p) p.begin(), p.end()
#define affirmative() cout<<"YES"<<nl
#define negative() cout<<"NO"<<nl
#define loop(i, start, end) for(ll i = start; i<end; i++)
#define matrix vector<vector<ll>>
#define MAX_VALUE LLONG_MAX
#define firstElement fst
#define secondElement snd
#define display(arr) for(auto element : arr) cout << element << " "; cout << nl
#define removeLast pop_back
#define fastmode() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main(){
     ll t;
    cin >> t;
    while(t--){
        ll len;cin >> len;
        string str;cin >> str;
         ll val;string ld;
        if (len == 1) cout << 8 << nl;
        else{
            if (len >= 3) ld = str.substr(len-3, 3);
            else ld = str;
            
            if (len >= 3)  val = stoll(ld);
            else val = stoll(str);
            
            if (val % 8 == 0) cout << str << nl;
            
            else{
                ll rem = val % 8;
                if (val % 10 >= rem) val -= rem;
                else val += 8 - rem;
                string res = "";
                if (len >= 3) res += str.substr(0, len-3);
                string vall = to_string(val);
                reverse(iterate(vall));
                while (vall.size() != ld.size()) vall += '0';
                reverse(iterate(vall));
                res += vall;
                cout << res << nl;
            }
        }
    }
    return 0;
}