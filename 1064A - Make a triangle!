#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int array[3] = {a, b, c};
    sort(array, array + 3);
    int counter = 0;
    if (a + b > c && a + c > b && b + c > a)
        cout << 0 << endl;
    else
    {
        while (array[0] + array[1] <= array[2])
        {
            array[0]++;
            counter++;
        }
        cout << counter << endl;
    }
}
