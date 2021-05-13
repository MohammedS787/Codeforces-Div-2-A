#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int array[a]{0};
    int counter = 0;
    for (int i = 0; i < a; i++)
        cin >> array[i];
    for (int i = 0; i < a; i++)
        for (int j = 0; j < a; j++)
            if (abs(array[i] - array[j]) <= b && i != j)
                counter++;
    cout << counter << endl;
}
