#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    string str;
    getline(cin, str);
    char array[10000]{0};
    int cnt = 0;
    bool isHere = false, space = false;
    for (int i = 0; i < str.length(); i++)
    {
        if (islower(str[i]))
            array[cnt++] = str[i], isHere = true;
        else if (str[i] == ',' || str[i] == '?' || str[i] == '.' || str[i] == '!')
        {
            if (array[cnt - 1] == ' ')
                cnt--;
            array[cnt++] = str[i], array[cnt++] = ' ';
        }
        else if (str[i] == ' ' && isHere)
        {
            if (array[cnt - 1] == ' ')
                cnt--;
            array[cnt++] = ' ', isHere = false;
        }
    }
    for (int i = 0; i < 10000; i++)
        if (array[i] == 0)
        {
            if (array[i - 1] == ' ')
                array[i - 1] = 0;
            // else if (array[i - 2] == ' ')
            // array[i - 2] = 0;
            break;
        }

    for (int i = 0; i < 10000; i++)
    {
        if (!array[i])
            break;
        cout << array[i];
    }
    cout << endl;
}
