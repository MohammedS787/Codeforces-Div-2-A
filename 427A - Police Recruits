#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n;
    cin >> n;
    int cnt = 0;
    stack<int> st;
    for (int i = 0, var; i < n; i++)
    {
        cin >> var;
        if (var >= 1)
        {
            while (var--)
                st.push(1);
        }
        else if (!st.empty())
            st.pop();
        else
            cnt++;
    }
    cout << cnt << endl;
}
