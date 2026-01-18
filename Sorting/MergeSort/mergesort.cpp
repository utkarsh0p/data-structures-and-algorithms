#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &v, int start, int mid, int end)
{
    vector<int> temp;
    int i = start, j = mid + 1;

    while (i <= mid && j <= end)
    {
        if (v[i] < v[j])
            temp.push_back(v[i++]);
        else
            temp.push_back(v[j++]);
    }

    while (i <= mid)
        temp.push_back(v[i++]);

    while (j <= end)
        temp.push_back(v[j++]);

    for (int k = 0; k < temp.size(); k++)
        v[start + k] = temp[k];
}

void mergeSort(vector<int> &v, int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        mergeSort(v, start, mid);
        mergeSort(v, mid + 1, end);
        merge(v, start, mid, end);
    }
}
int main()
{
    vector<int> v = {2, 9, 4, 1, 6, 3};
    mergeSort(v, 0, v.size() - 1);

    for (int i : v)
    {
        cout << i << " ";
    }
}