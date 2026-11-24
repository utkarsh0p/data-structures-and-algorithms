/*
ID: utkarsh64
TASK: PROBLEM
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<vector<int>>& al,vector<bool>& visited, vector<int>& store){
  store.push_back(node);
  visited[node] = true;
  for(size_t i=0; i<al[node].size(); i++){
    int v = al[node][i];
    if(!visited[v]){
      dfs(v, al, visited, store);
    }
  }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<vector<int>>edges = {{3,2},{0,1},{2,0}, {2,1},{1,3}};
    //adjacency matrix
    //vertex is 4
    vector<int>vertex(4);
    vector<vector<int>> AM(vertex.size(), vector<int>(vertex.size(), 0));
    for(size_t i=0; i<vertex.size(); i++){
      int src = edges[i][0];
      int dest = edges[i][1];
      AM[src][dest] = 1;
      AM[dest][src] = 1;
    }
    //printing the matrix
    for(size_t i=0; i<vertex.size(); i++){
      for(size_t j=0; j<vertex.size(); j++){
        cout << AM[i][j] << " ";
      }
      cout << endl;
    }


    cout << "--> we will now make the adjacency list";

    // adjacency list
    // "- so the indexes will represent the vertexes and the vector inside the vector are the connections of that vector"
    //{ 0(1,3,2), 1(2,3)}
    cout << endl;
    vector<vector<int>>AJ(vertex.size());
    for(auto &n: edges){
      AJ[n[0]].push_back(n[1]); //-> in the aj n[0] is the index and [1] is what we need to push back
      AJ[n[1]].push_back(n[0]);
    }
    for(size_t i=0; i<vertex.size(); i++){
      cout << i << " -> ";
      cout << "{";
      for(size_t j=0; j<AJ[i].size(); j++){
        cout <<AJ[i][j] << " ";
      }
      cout << "}";
      cout << endl;
    }

    //dfs
    vector<bool>visited(vertex.size());
    vector<int>store;
    dfs(0, AJ, visited, store);
    for(auto x : store){
      cout << x << " ";
    }
} 
