#include <bits/stdc++.h>
using namespace std;

vector<string> ss;

void permute(string a, int l, int r)
{
    // Base case
    if (l == r)
        ss.push_back(a);
    else
    {
        // Permutations made
        for (int i = l; i <= r; i++)
        {

            // Swapping done
            swap(a[l], a[i]);

            // Recursion called
            permute(a, l + 1, r);

            //backtrack
            swap(a[l], a[i]);
        }
    }
}

int main()
{
    int t, a;
    string s, x, y, z;
    cin >> t;
    while (t--)
    {
        cin >> a;
        cin >> s;
        if (s.length() % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            permute(s, 0, s.length() - 1);
            int flag;
            for (int j = 0; j < ss.size(); j++)
            {
                flag = 0;
                x = ss[j].substr(0, ss[j].length() / 2);
                y = ss[j].substr(ss[j].length() / 2, ss[j].length());
                reverse(y.begin(), y.end());
                for (int i = 0; i < x.length(); i++)
                {
                    if (x[i] == y[i])
                    {
                        flag = 0;
                        break;
                    }
                    else
                    {
                        flag = 1;
                    }
                }
                if(flag==1)break;
            }
            if (flag == 1)
            {
                reverse(y.begin(), y.end());
                z = x + y;
                cout << "YES" << endl
                     << z << endl;
            }
            if (flag == 0)
            {
                cout << "NO" << endl;
            }
            ss.clear();
        }
    }
    return 0;
}
