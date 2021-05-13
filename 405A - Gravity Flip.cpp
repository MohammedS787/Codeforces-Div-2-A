#include <bits/stdc++.h>
using namespace std;

void sorting(int *const arr, int size)
{
    int insert;
    for (int next = 0; next < size; next++)
    {
        insert = arr[next];
        int moveItem = next;
        while (moveItem > 0 && arr[moveItem - 1] > insert)
        {
            arr[moveItem] = arr[moveItem - 1];
            --moveItem;
        }
        arr[moveItem] = insert;
    }
}

int main()
{
    int n = 0;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
        cin >> array[i];
    sorting(array, n);
    for (int i = 0; i < n; i++)
        cout << array[i] << " ";
    cout << endl;
}
