#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9 + 7;

long long get_hash(string s){
    long long h=0;
    for(auto c : s) h = ( h * 31 + (c - 'a' + 1)) % MOD;
    return h;
}

int main(){
    cout<<get_hash("ab")<<endl;
    cout<<get_hash("dbc")<<endl;
    // dbc
    // h=0
    // h= 0 * 31 + 4
    // h= 4*31 + 2
    // h= 126 * 31 +3

    // output = 3909


}