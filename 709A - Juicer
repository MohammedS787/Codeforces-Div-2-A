#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define loop(n) for (int i = 0; i < n; i++)
#define io                        \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
// -------------------------------------------------------

int main()
{
    io int n;
    cin >> n;
    int b, d, cnt = 0;
    cin >> b >> d;
    ll sum = 0;
    loop(n)
    {
        int var;
        cin >> var;
        if (b >= var)
        {
            sum += var;
            if (sum > d)
                sum = 0, cnt++;
        }
    }
    cout << cnt << endl;
}
