#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (b == 0)
        {
            cout << a << endl;
        }else if (a==b)
        {
            cout <<(b*2)-1 << endl;
        }
        else
        {
            cout << (a - b) + (b*2) << endl;
        }
    }
    return 0;
}
