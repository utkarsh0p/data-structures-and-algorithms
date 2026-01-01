// QUESTION ---- Maximum Subarray Sum


// There are 2 ways to solve this problem one is to solve it with the brute force and one is with the kadane's algorithm

// BRUTEFORCE
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    vector<int> v = {2, 6, 2, 3};
    int max = INT_MIN;

    for (int i = 0; i < v.size(); i++)
    {
        int currentSum = 0;
        for (int j = i; j < v.size(); j++)
        {
            currentSum += v[j];
            if (currentSum > max)
            {
                max = currentSum;
            }
        }
    }
    cout << max;
}