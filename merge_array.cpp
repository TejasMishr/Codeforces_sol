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
#define REP(i,a,b) for (int i = a; i < b; i++)
#define all(a) (a).begin(), (a).end()
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007

int main() {
    int arr[5] = {1, 3, 5, 9, 12};
    int vec[3] = {2, 3, 4};
    int newarr[8];
    int i = 0, j = 0;
    int idx = 0;
    while (i < 5 && j < 3) {  
        if (arr[i] < vec[j]) {
            newarr[idx++] = arr[i];
            i++;
        } else if (arr[i] > vec[j]) {
            newarr[idx++] = vec[j];
            j++;
        } else {
            newarr[idx++] = arr[i];
            newarr[idx++] = vec[j];
            i++;
            j++;
        }
    }
  
    while (i < 5) {
        newarr[idx++] = arr[i++];
    }
   
    while (j < 3) {
        newarr[idx++] = vec[j++];
    }

    REP(i, 0, 8) cout << newarr[i] << " ";

    return 0;
}
