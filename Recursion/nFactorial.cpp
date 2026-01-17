#include <iostream>
using namespace std;
int factorial(int a)
{
    if (a == 0)
    {
        return 1;
    }
    int result = a * factorial(a - 1);
    return result;
}
int main()
{
    cout << factorial(3);
}