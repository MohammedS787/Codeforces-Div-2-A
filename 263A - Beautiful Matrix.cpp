#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0, irow, icol;
    int array[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> array[i][j];
            if (array[i][j] == 1)
            {
                irow = i;
                icol = j;
            }
        }
    }
    while (irow != 2)
    {
        n++;
        if (irow > 2)
            --irow;
        else
            ++irow;
    }

    while (icol != 2)
    {
        n++;
        if (icol > 2)
            --icol;
        else
            ++icol;
    }
    cout << n << endl;
}
