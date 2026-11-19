#include<iostream>
#include<vector>
using namespace std;
//Making the heap class
class Heap{
  vector<int>v;
  int index = 1;
  public:
  Heap(){
   v =  vector<int>(100);
  }
  void insert(int value){
    v[index] = value;
    int i = index;
    while(index > 1){
      if(v[index] > v[index/2]){
        swap(v[index], v[index/2]);
        index = index/2;
      }
      else{
        break;
      }
    }
    index = ++i;
  }
  void print(){
    for(int i=1; i<index; i++){
      cout<< v[i] << " ";
    }
  }

  void deleteHeap(){
   int end = index-1;
   int start = 1;
   if( end == 0 ) return;
   swap(v[start], v[end]);
   v[end] = 0;
   end--;
   index --;
   int i = start;
   int right = 2*i;
   int left = 2*i+1;

   while(right <= end && left <= end){
     if( v[right]  > v[start]){
       swap(v[right], v[start]);
       start = right;
     }
     else if( v[left] > v[start]){
       swap(v[left], v[start]);
       start = left;
     }
   }
  }

};
int main(){
  Heap h;
  h.insert(32);
  h.insert(0);
  h.insert(2);
  h.insert(53);
  h.insert(11);
  h.insert(42);
  h.insert(23);
  h.insert(21);
  h.print();
  h.deleteHeap();
  cout << endl;
  h.print();
}
