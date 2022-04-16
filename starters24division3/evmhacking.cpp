#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, arr1[3], arr2[3], a, b;
    cin >> t;
    while (t--)
    {
        for (int i = 0; i < 3; i++)
        {

            cin >> arr1[i];
        }
        for (int i = 0; i < 3; i++)
        {
            cin >> arr2[i];
        }
        // cout << arr2[b] <<" "<<minn<<endl;
        double avg = (double)(arr2[0] + arr2[1] + arr2[2]) / 2;
        // cout << total << ' ' << avg << endl;
        if ((arr1[0]+arr1[1]+arr2[2]> avg)||(arr1[1]+arr1[2]+arr2[0]> avg)||(arr1[0]+arr1[2]+arr2[1]> avg))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
