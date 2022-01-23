#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a, flag = 1;
    while (n--)
    {
        cin >> a;
        flag = 1;
        if (a == 1)
        {
            cout << "no" << endl;
            continue;
        }
        for (int i = 2; i<=sqrt(a); i++)
        {
            if (a % i == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }

    return 0;
}