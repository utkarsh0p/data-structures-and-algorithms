#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a == 0)
    {
        cout << b;
        return 0;
    }
    else if (b == 0)
    {
        cout << a;
        return 0;
    }
    else if (a == b)
    {
        cout << a;
        return 0;
    }
    else
    {
        int gcd = 1;
        for (int i = 1; i <= min(a, b); i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                gcd = i;
            }
        }
        cout << gcd;
    }
}