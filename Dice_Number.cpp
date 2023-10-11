// Header Files and namespaces
#include <bits/stdc++.h>
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
#define print(x) cout << x << '\n'
#define REP(i, a, b) for (int i = a; i < b; i++)
#define all(a) (a).begin(), (a).end()
#define fast                      \
    ios_bfse::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mod 1000000007;
int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        vi vec(6);
        for (int i = 0; i < 6; i++) cin >> vec[i];
        

        vi a(vec.begin(), vec.begin() + 3);
        vi b(vec.begin()+3, vec.end());
        sort(a.begin(), a.end(), greater<>());
        sort(b.begin(), b.end(), greater<>());

        if (a > b) cout << "Alice" << endl;
        
        else if (b > a) cout << "Bob" << endl;
        
        else cout << "Tie" << endl;
        
    }

    return 0;
}