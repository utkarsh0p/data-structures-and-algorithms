#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = false;
    isPrime[1] = false;

    for (int i = 2; i < isPrime.size(); i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j < isPrime.size(); j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    int count = 0;
    for (bool val : isPrime)
    {
        if (val == true)
            count++;
    }
    cout << count;
}