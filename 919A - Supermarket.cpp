#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << fixed << setprecision(8);
    double a, b;
    cin >> a >> b;
    double result = 0, min = 0;
    bool first = true;
    double c, d;
    for (int i = 0; i < a; i++)
    {
        cin >> c >> d;
        result = (c / d) * b;
        if (first)
            min = result, first = 0;
        if (result < min)
            min = result;
    }
    cout << min << endl;
}
