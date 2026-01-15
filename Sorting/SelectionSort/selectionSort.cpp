#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    vector<int> v = {3, 1, 5, 3, 0, 2, 6};

    for (int i = 0; i < v.size() - 1; i++)
    {
        int min = v[i];
        int mindex = i;
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[j] < min)
            {
                min = v[j];
                mindex = j;
            }
        }
        swap(v[i], v[mindex]);
    }

    for (int nums : v)
    {
        cout << nums;
    }
}