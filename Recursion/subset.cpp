#include<bits/stdc++.h>
using namespace std;
void solve( vector<int> & v, vector<vector<int>>&store, int i , vector<int>&curr){
  if( i == v.size()){
    store.push_back(curr);
    return;
  }

  //include the left tree
  curr.push_back(v[i]);
  solve(v, store, i+1, curr);
  curr.pop_back();
  //exclude the right tree
  solve(v, store, i+1, curr);
}
int main(){
  vector<int>v = {1,2,3};
  vector<vector<int>>store;
  vector<int>curr;
  solve( v, store, 0, curr);
  for( auto x : store){
    cout << "{ ";
    for( auto y : x){
      cout<<y;
    }
    cout << " }   ";
  }
}
