#include<bits/stdc++.h>
using namespace std;
//global store to use to store the string
vector<string>store;

//is valid or not the next ele
bool isValid(int i, int j,vector<vector<int>>&arr, vector<vector<bool>>&visited,int size){
  return (i >=0 && i < size)&&( j >=0 && j<size) && visited[i][j] == false && arr[i][j]==1;
}

//maze function
void ratMaze(int i, int j, vector<vector<int>>&arr,vector<vector<bool>>&visited, int size, string str){
 if( i==size-1 && j==size-1){
   store.push_back(str);
   return;
 }
 if(arr[size-1][size-1] == 0)return;
 if(arr[0][0] == 0) return;

 cout << "Moving to: " << i << "," << j << endl;
   //down
    if(isValid(i+1,j,arr,visited,size)){
      visited[i][j] = 1;
      str.push_back('D');
      ratMaze(i+1,j, arr,visited, size, str);
      visited[i][j]=0;
    }
   //left
    if(isValid(i,j-1,arr,visited,size)){
      visited[i][j] = 1;
      str.push_back('L');
      ratMaze(i,j-1, arr,visited, size, str);
      visited[i][j]=0;

    }

   //right
    if(isValid(i,j+1,arr,visited,size)){
      visited[i][j] = 1;
      str.push_back('R');
      ratMaze(i,j+1, arr,visited, size, str);
      visited[i][j]=0;

    }

   //up
    if(isValid(i-1,j,arr,visited,size)){
      visited[i][j] = 1;
      str.push_back('U');
      ratMaze(i-1,j, arr,visited, size, str);
      visited[i][j]=0;

    }
}


//main function
int main(){
  int size;
  cin >> size;
  vector<vector<int>>arr(size, vector<int>(size));
  for(auto &x:arr){
    for(auto &y:x){
      cin >> y;
    }
  }
string str = "";
vector<vector<bool>>visited(size, vector<bool>(size,false));
 ratMaze(0,0,arr,visited,size,str);
 for(auto x:store){
   cout<< x << " ";
 }
}
