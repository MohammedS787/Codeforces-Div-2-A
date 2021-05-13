#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n;
    cin >> n;
    vector<int> array(n);
    for (int i = 0; i < n; i++)
        cin >> array[i];
    int right = n - 1, left = 0, c = 1;
    int serje = 0, dema = 0;
    while (n--)
    {
        if (c == 1)
            if (array[right] > array[left])
                serje += array[right], right--;
            else
                serje += array[left], left++;
        else
        {
            if (array[right] > array[left])
                dema += array[right], right--;
            else
                dema += array[left], left++;
        }
        c ^= 1;
    }
    cout << serje << ' ' << dema << endl;
}
