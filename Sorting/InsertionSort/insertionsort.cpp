#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {3, 4, 2, 0, 0, 0, 94, 98};

    for (int i = 1; i < v.size(); i++)
    {
        // int prev = i;
        // for (int j = i - 1; j >= 0; j--)
        // {
        //     while (v[j] > v[prev])
        //     {
        //         swap(v[j], v[prev]);
        //         prev--;
        //     }
        // }
        int key = v[i];
        int index = i;
        while (index > 0 && key < v[index - 1])
        {
            swap(v[index], v[index - 1]);
            index--;
        }
    }

    for (int nums : v)
    {
        cout << nums << " , ";
    }
}