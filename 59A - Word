#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    cin >> name;
    int lcounter = 0, ucounter = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (islower(name[i]))
            lcounter++;
        if (isupper(name[i]))
            ucounter++;
    }
    if (lcounter > ucounter)
        for (int i = 0; name[i] != '\0'; i++)
            cout << (char)(tolower(name[i]));
    else if (lcounter < ucounter)
        for (int i = 0; name[i] != '\0'; i++)
            cout << (char)(toupper(name[i]));
    else
        for (int i = 0; name[i] != '\0'; i++)
            cout << (char)(tolower(name[i]));
}
