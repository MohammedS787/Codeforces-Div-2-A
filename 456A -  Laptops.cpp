#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define loop(i, n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define io                        \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
//---------------------------------------------------------//

int main(void)
{
    io int n;
    cin >> n;
    string ans = "Poor Alex";
    loop(i, n)
    {
        int a, b;
        cin >> a >> b;
        if (b > a)
            ans = "Happy Alex";
    }

    cout << ans << endl;
}
