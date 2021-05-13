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
    vector<string> v(n);
    loop(i, n)
    {
        cin >> v[i];
    }
    loop(i, n)
    {
        bool enter = true;
        loop(j, n)
        {
            if (v[i] == v[j] && i != j && j < i)
            {
                cout << "YES" << endl;
                enter = false;
                break;
            }
        }
        if (enter)
            cout << "NO" << endl;
    }
}
