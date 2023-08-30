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


bool isValidString(const std:: string& inputString, int length) {
if (length % 3 == 1) {
return true;}


for (char ch ='a'; ch < 'z'; ch++) {
int firstIndex = length + 1;
int lastIndex = -1;
for (int i= 0; 1 < length; i++) {
if (i%3 == 0 && inputString[1] == ch) {
firstIndex = i;
break;}}

for (int i= length - 1; i >= 0; i--) {
int x = length - 1 - i;
if (x%3== 0 && inputString[i] == ch) {
lastIndex =i;
break;}}

if (firstIndex < lastIndex) {
return true;
}}
return false;
}



int main ()
{ 
  ll t;
  cin>>t;
  while(t--){
    int length;cin>>length;
    std::string inputString;
std::cin >> inputString;
if (isValidString (inputString, length)) {
std::cout<< "Yes \n";
} else {
std::cout << "No\n";
}
      

  }
  return 0;
}