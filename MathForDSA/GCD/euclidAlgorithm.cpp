#include <iostream>
using namespace std;

int main()
{
    int a = 20, b = 28;
    while (a > 0 && b > 0)
    {
        if (a > b)
            a = a % b;
        if (b > a)
            b = b % a;
    }
    if(a==b) cout<< b;
    else cout<<a;
}