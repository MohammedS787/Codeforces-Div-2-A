#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n;
    cin >> n;
    pair<int, int> array[n];
    for (int i = 0; i < n; i++)
        cin >> array[i].first >> array[i].second;
    int cnt = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (array[i].second == array[j].first && i != j)
                cnt++;
    cout << cnt << endl;
}
