#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m[n];
    for (int i = 0; i < n; i++)
        cin >> m[i];

    int counter = 0;
    for (int i = 1; i < n; i++)
    {
        if (m[i - 1] == m[i])
            continue;
        counter++;
    }
    ++counter;
    cout << counter << endl;
}
