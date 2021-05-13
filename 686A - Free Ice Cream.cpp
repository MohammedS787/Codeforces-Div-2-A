#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define loop(i, n) for (int i = 0; (int)i < n; i++)
#define vi vector<int>
#define vs vector<string>
#define range(v) (v.begin(), v.end())
#define io                        \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
//---------------------------------------------------------//

int main(void)
{
    io int n;
    cin >> n;
    ll cnt = 0, ice;
    cin >> ice;
    while (n--)
    {
        char idx;
        cin >> idx;
        int num;
        cin >> num;
        if (idx == '-')
        {
            if (ice >= num)
            {
                ice -= num;
            }
            else
            {
                cnt++;
            }
        }
        if (idx == '+')
            ice += num;
    }
    cout << ice << ' ' << cnt << endl;
}
