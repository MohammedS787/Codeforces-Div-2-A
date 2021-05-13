#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    cin.tie(0), cout.tie(0);
    ios::sync_with_stdio(0);
    set<int> st;
    int var = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> var;
        st.insert(var);
    }
    cout << 4 - st.size() << endl;
}
