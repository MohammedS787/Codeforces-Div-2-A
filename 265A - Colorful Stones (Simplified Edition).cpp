#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define loop(i, n) for (int i = 0; (int)i < n; i++)
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
    io string n, m;
    cin >> n >> m;

    int pos = 0;
    loop(i, m.length())
    {
        if (n[pos] == m[i])
            pos++;
    }
    cout << pos + 1 << endl;
}
