/*
ID: utkarsh64
TASK: PROBLEM
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

   vector<int>v = {3,4,2,5};
   cout << accumulate(v.begin()+1, v.end(), 0);
}