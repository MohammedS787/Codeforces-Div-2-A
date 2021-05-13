#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define loop(n) for (int i = 0; i < n; i++)

int main()
{
    cin.tie(0), cout.tie(0);
    ios::sync_with_stdio(0);
    int n, m;
    cin >> n >> m;
    int cnt = 0;
    for (int i = 1; i <= 6; i++)
    {
        if (i >= n && i >= m)
            cnt++;
    }
    if (6 % cnt == 0 && cnt != 0)
        cout << 1 << '/' << 6 / cnt << endl;
    else if (cnt == 4)
        cout << 2 << '/' << 3 << endl;
    else
        cout << cnt << '/' << 6 << endl;
}
