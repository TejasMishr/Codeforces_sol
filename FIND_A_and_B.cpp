#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int x, y, z;
        cin >> x >> y >> z;
        int a, b;
        if (((x * y) % == 0))
        {
            a = x * y;
            b = 2;
            cout << a << " " << b << endl;
        }
        else if ((y * z) % x == 0)
        {
            a = y * z;
            b = x;
            cout << a << " " << b << endl;
        }
        else if ((x * z) % y == 0)
        {

            cout < a << " " << b << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
