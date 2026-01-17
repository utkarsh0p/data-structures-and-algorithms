#include <iostream>
using namespace std;
int fibonacci(int a)
{
    if (a == 0)
    {
        return 0;
    }
    if (a == 1)
    {
        return 1;
    }
    int val = fibonacci(a - 1) + fibonacci(a - 2);
    return val;
}
int main()
{
    cout << fibonacci(4);
}