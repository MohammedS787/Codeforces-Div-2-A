#include <iostream>
using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        int height;
        cin >> height;
        if (height > h)
            counter += 2;
        else
            counter++;
    }
    cout << counter << endl;
    return 0;
}
