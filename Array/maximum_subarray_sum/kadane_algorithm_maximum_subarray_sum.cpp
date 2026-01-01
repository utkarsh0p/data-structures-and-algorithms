//KADANE'S ALGORITHM

#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    int currentSum = 0;
    int max = INT_MIN;
    vector<int> v = {3, 5, 2, -2, 6, 6, 0, -1};

    for (int num : v)
    {
        currentSum += num;
        if (currentSum > max)
        {
            max = currentSum;
        }
        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }
    cout << max;
}