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
    io int n;
    cin >> n;
    int num, array[4][5001]{0}, arr[4];
    loop(i, n)
    {
        cin >> num;
        array[num][arr[num]++] = i + 1;
    }
    int res = min({arr[1], arr[2], arr[3]});
    cout << res << endl;
    loop(i, res)
    {
        cout << array[1][i] << ' ' << array[2][i] << ' ' << array[3][i] << endl;
    }
}
