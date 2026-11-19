#include<iostream>
using namespace std;
class Heap{
  public:
    int arr[100];
    int index = 1;
    
    void insert ( int value){
      int i = index;
      arr[index++] = value;
      
      while(i > 1){
        if( arr[i] < arr[(i/2)]){
          swap(arr[i], arr[(i/2)]);
          i = i/2;
        }
        else{
          break;
        }
      }
      index = ++i;
    }
    void print(){
      for(int i=1 ; i < index; i++){
        cout << arr[i] << " ";
      }
    }
};

int main(){
  Heap h1;
  h1.insert(3);
  h1.insert(3);
  h1.insert(5);
  h1.insert(21);
  h1.insert(0);
  h1.insert(23);
  h1.print();
}
