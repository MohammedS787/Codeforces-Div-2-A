#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);
    string str;
    cin >> str;
    int cnt = 0;
    int first, second, third, forth;
    for (int i = 0; i < str.size(); i++)
    {
        if (i == 0)
        {
            int res = 0;
            first = res - ((int)str[i] - 123);
            second = res + ((int)str[i] - 97);
            third = 50000;
            forth = 50000;
        }
        else
        {
            int res = (int)str[i - 1] - 97;
            int secRes = ((int)str[i - 1] - 123);
            third = abs(res - ((int)str[i] - 123));
            forth = abs(((int)str[i] - 123) - secRes);
            second = abs(res - ((int)str[i] - 97));
            first = abs(((int)str[i] - 97) - secRes);
        }
        cnt += min({third, forth, second, first});
    }
    cout << cnt << endl;
}
