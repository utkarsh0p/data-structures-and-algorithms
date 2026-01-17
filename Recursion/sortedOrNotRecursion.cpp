#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> v, int n)
{
    if (n <= 1)
        return true;
    if (v[n - 1] < v[n - 2])
        return false;
    return isSorted(v, n - 1);
}
int main()
{
    vector<int> v = {1, 2, 4, 5, 6};
    cout << isSorted(v, v.size());
}