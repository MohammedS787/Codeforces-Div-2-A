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

int main()
{
    io int n, len;
    cin >> len >> n;
    vector<char> s;
    char str = 97, i = 0;
    loop(j, len)
    {
        if (j < n)
            s.push_back(str++);
        else
            s.push_back(s[i++]);
    }
    for (auto i = s.begin(); i != s.end(); i++)
        cout << *i;
    cout << endl;
}
