/*
In this we will put two pointers one in the end and one at the start and check the sum of those
with the target ( as we know the array is sorted so the biggest will be in the end and smallest in beginning)
so the cases may be either > < or = where we will move the pointers accordingly
--(sorted array)
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {2,3,4,5,6};
    int target = 6;

    int start = 0, end = v.size() - 1;

    while (start < end)
    {
        if (v[start] + v[end] == target)
        {
            cout << start << " " << end;
            break;
        }
        else if (v[start] + v[end] > target)
        {
            end--;
        }
        else
            start++;
    }
}
