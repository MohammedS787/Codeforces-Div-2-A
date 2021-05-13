#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s, ans = 0, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> s;
            if (s == 1)
                sum++;
        }
        if (sum >= 2)
            ans++;
    }
    cout << ans << endl;
}
