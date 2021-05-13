#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name1, name2;
    cin >> name1 >> name2;
    string temp = name1;
    for (int i = 0; i < name1.length(); i++)
        temp[name1.length() - i - 1] = name1[i];
    if (temp == name2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
