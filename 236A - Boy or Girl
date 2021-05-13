#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    cin >> name;

    for (int i = 0; name[i] != '\0'; i++)
    {
        for (int j = 0; name[j] != '\0'; j++)
        {
            if (name[i] == name[j] && i != j)
            {
                name[i] = toupper(name[i]);
                // name[j] = toupper(name[j]);
            }
        }
    }
    int counter = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (islower(name[i]))
            ++counter;
    }
    if (counter % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
}
