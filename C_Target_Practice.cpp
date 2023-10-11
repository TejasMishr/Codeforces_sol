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
void solve(){ 
    vector<string>vec; 
    REP(i,0,10){ 
      string s;cin>>s; 
      vec.push_back(s);
    } 
   
  vector<vector <int> >res(10,vector<int>(10,0)); 
  REP(i,0,10){ 
    res[i][0] = 1; 
    res[0][i] = 1; 
    res[i][9] = 1; 
    res[9][i] = 1; 
  } 
 
  REP(i,1,9){ 
    res[i][1] = 2; 
    res[1][i] = 2; 
    res[i][8] = 2; 
    res[8][i] = 2; 
  } 
 
  REP(i,2,8){ 
    res[i][2] = 3; 
    res[2][i] = 3; 
    res[i][7] = 3; 
    res[7][i] = 3; 
  }  
 
  REP(i,3,7){ 
    res[i][3] = 4; 
    res[3][i] = 4; 
    res[i][6] = 4; 
    res[6][i] = 4; 
  } 
 
  REP(i,4,6){ 
    res[i][4] = 5; 
    res[4][i] = 5; 
    res[i][5] = 5; 
    res[5][i] = 5; 
  } 
   
  ll tot= 0; 
  REP(i,0,10) REP(j,0,10) if(vec[i][j]=='X') tot+= res[i][j]; 
  cout<<tot<<endl; 
 
 
} 
int main(){ 
     
    int t;cin>>t; 
 
    while(t--){ 
        solve(); 
    } 
     
    return 0; 
}