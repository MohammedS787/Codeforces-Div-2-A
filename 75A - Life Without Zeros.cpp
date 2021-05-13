#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    int equ1 = num1 + num2;
    int n = 0, m = 0, l = 0;
    int mul = 1, mul2 = 1, mul3 = 1;
    while (equ1)
    {
        int mod = num1 % 10;
        int mod2 = num2 % 10;
        int mod3 = equ1 % 10;
        num1 /= 10, num2 /= 10, equ1 /= 10;
        if (mod != 0)
            n += mul * mod, mul *= 10;
        if (mod2 != 0)
            m += mul2 * mod2, mul2 *= 10;
        if (mod3 != 0)
            l += mul3 * mod3, mul3 *= 10;
    }
    int equ2 = m + n;
    if (equ2 == l)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
