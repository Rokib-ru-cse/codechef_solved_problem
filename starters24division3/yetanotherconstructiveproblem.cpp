#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, a = 1, b = 1, c = 1;
    cin >> t;
    while (t--)
    {
        cin >> n;
        while (true)
        {
            if ((a | b) & (b | c) & (c | a) == n)
            {
                break;
            }
            else
            {
                a++;
                b++;
                c++;
                cout << a << " " << b << " " << c << endl;
            }
        }
        cout << a << " " << b << " " << c << endl;
    }
    return 0;
}
