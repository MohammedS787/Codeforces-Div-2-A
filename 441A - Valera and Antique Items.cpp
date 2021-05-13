#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define loop(i, n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define range(v) (v.begin(), v.end())
#define io                        \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
//---------------------------------------------------------//

int main(void)
{
    io int n;
    cin >> n;
    int money;
    cin >> money;
    int cnt = 0;
    vi seller;
    loop(i, n)
    {
        int item;
        cin >> item;
        bool first = true;
        loop(j, item)
        {
            int bouns;
            cin >> bouns;
            if (bouns < money && first)
            {
                cnt++;
                seller.push_back(i + 1);
                first = false;
            }
        }
    }
    cout << cnt << endl;
    sort range(seller);
    loop(i, cnt)
    {
        cout << seller[i] << ' ';
    }
    cout << endl;
}
