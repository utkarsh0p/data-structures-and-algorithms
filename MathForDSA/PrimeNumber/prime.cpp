#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 0 || n == 1)
    {
        cout << "Not Prime";
        return 0;
    }
    bool isPrime = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Not Prime";
            cout << endl;
            isPrime = false;
            break;
        }
    }
    if (isPrime == true)
    {
        cout << "Prime";
        cout << endl;
    }
}