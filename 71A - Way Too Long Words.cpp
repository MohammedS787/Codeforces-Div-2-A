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
    int n;
    cin >> n;
    while (n--)
    {
        cin >> str;
        if (str.length() <= 10)
            cout << str << endl;
        else
            cout << str[0] << str.length() - 2 << str[str.length() - 1] << endl;
    }
}
