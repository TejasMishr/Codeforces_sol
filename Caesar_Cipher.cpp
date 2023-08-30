#include <iostream>
#include <string>
#define mod=100000007
using namespace std;

int main()
{
    int t;cin>>t;

    while (t > 0)
    {
        int n;
        cin >> n;
        string a, b, c;
        cin >> a >> b>>c;
        string str ="";
        string str2 = "";
        for (char i = 'a'; i <= 'z'; i++)
        {
            str += i;
            str2 += i;
        }
        str += str2;

        string f = str;

        int ind1 = 0;
        int ind2 = 0;
        for (int i = 0; i < f.length(); i++)
        {
            if (f[i] == a[0])
            {
                ind1 = i;
                break;
            }
        }
        for (int i = ind1; i < f.length(); i++)
        {
            if (f[i] == b[0])
            {
                ind2 = i;
                break;
            }
        }

        int dist = ind2 - ind1;
        string ans = "";
        for (int i = 0; i < c.length(); i++)
        {
            char ct = c[i];
            int g = ct - 97;
            g += dist;
            ans += f[g];
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}
