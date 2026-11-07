#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&v , int start , int mid , int end) {
  //make two temporary storage
  int n1 = mid - start + 1;
  int n2 = end - mid;
  vector<int>L(n1);
  vector<int>R(n2);

  //two temporary vectors
  for(int i = 0 ; i < n1; i++){
    L[i] = v[start + i];
  }
  for(int i = 0 ; i < n2; i++){
    R[i] = v[mid + i + 1];
  }

  int i = 0, j = 0, k = start;
  while( i < n1 && j < n2){
    if( L[i] <= R[j]){
      v[k] = L[i];
      i++;
    }
    else{
      v[k] = R[j];
      j++;
    }
    k++;
  }


  //add the remaining one
  while(i < n1){
    v[k] = L[i];
    i++;
    k++;
  }
  //add the remaining one
  while(j < n2){
    v[k] = R[j];
    j++;
    k++;
  }

}

void mergeSort(vector<int>&v,int start, int end){
  if( start == end) return;

  int mid = (start + end)/2;

  mergeSort(v, start, mid);
  mergeSort(v, mid+1, end);
  merge(v, start , mid, end);
}

int main(){

  int size;
  cin>> size;
  vector<int>v(size);
  for(int i = 0 ; i< size; i++){
    cin>> v[i];
  }


  int start = 0;
  int end = v.size()-1;
  mergeSort(v, start, end);
  for( int x: v){
    cout << x <<" ";
  }
}

