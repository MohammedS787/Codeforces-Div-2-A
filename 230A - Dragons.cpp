#include <bits/stdc++.h>
using namespace std;

int main()
{
    int power, n;
    cin >> power >> n;
    pair<int, int> array[n];
    int bouns = power;
    for (int i = 0; i < n; i++)
        cin >> array[i].first >> array[i].second;
    sort(array, array + n);
    for (int i = 0; i < n; i++)
        if (bouns > array[i].first)
            bouns += array[i].second;
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    cout << "YES" << endl;
}
