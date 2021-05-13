#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);
    int array[4];
    for (int i = 0; i < 4; i++)
        cin >> array[i];
    string str;
    cin >> str;
    int sum = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '1')
            sum += array[0];
        else if (str[i] == '2')
            sum += array[1];
        else if (str[i] == '3')
            sum += array[2];
        else
            sum += array[3];
    }
    cout << sum << endl;
}
