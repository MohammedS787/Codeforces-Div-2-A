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
    io string str;
    cin >> str;
    vi v;
    for (int i = 0; i < str.length(); i += 2)
        v.push_back((int)(str[i] - '0'));
    sort range(v);
    loop(i, v.size())
    {
        if (i == v.size() - 1)
            cout << v[i];
        else
            cout << v[i] << '+';
    }
    cout << endl;
}
