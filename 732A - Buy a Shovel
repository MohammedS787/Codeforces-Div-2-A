#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    cin.tie(0), cout.tie(0);
    ios::sync_with_stdio(0);
    int price, change;
    cin >> price >> change;
    int count = 0, var = 1;
    while (true)
    {
        count = price * var++;
        if (count % 10 == 0)
            break;
        else if (count % 10 == change)
            break;
    }
    cout << var - 1 << endl;
}
