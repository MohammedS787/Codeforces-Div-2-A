#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define loop(i, n) for (int i = 0; (int)i < n; i++)
#define loop1(i, n) for (int i = 1; (int)i < n; i++)
#define vloop(v) for (auto it = v.begin(); it != v.end(); it++)
#define vi vector<int>
#define vs vector<string>
#define range(v) (v.begin(), v.end())
#define io                        \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
//-----------------------------------------------------------------------//

int main()
{
    io int n;
    cin >> n;
    vi v(n + 1);
    loop(i, n) cin >> v[i];
    int m;
    cin >> m;
    loop(i, m)
    {
        int a, b;
        cin >> a >> b;
        int k = v[a - 1];
        int down = k - b;
        int up = k - down - 1;
        v[a] += down;
        a == 1 ? v[0] = 0 : v[a - 2] += up;
        v[a - 1] = 0;
    }
    v.pop_back();
    vloop(v) cout << *it << endl;
}
