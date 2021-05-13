#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    char array[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            array[i][j] = '.';
    int counter1 = 1;
    int counter2 = 3;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if (i % 2 == 0)
                array[i][j] = '#';
            if (i == counter2 && j == 0 && i != 5)
            {
                array[i][j] = '#', counter2 += 4;
                break;
            }
            if (i == counter1 && j == m - 1)
                array[i][j] = '#', counter1 += 4;
        }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << array[i][j];
        cout << endl;
    }
}
