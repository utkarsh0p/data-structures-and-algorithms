#include <iostream>
#include <vector>
using namespace std;

#include <iostream>
#include <vector>
using namespace std;

bool binaryRecursion(vector<int> v, int target, int low, int hi)
{
    if (low > hi)
        return false;
    int mid = (low + hi) / 2;
    if (v[mid] > target)
        hi = mid - 1;
    else if (v[mid] == target)
        return true;
    else
        low = mid + 1;

    return binaryRecursion(v, target, low, hi);
}
int main()
{
    vector<int> v = {-1, 3, 4, 8, 7, 9, 12, 22};
    int target = -1;
    int low = 0;
    int hi = v.size() - 1;
    cout << binaryRecursion(v, target, low, hi);
}
