#include<iostream>
using namespace std;
void reverse(string* value, int i , int j){
 if ( i > j){
   return;
 } 
 swap((*value)[i], (*value)[j]);
 i++, j--;
 reverse(value, i, j);
}
int main() {
  string name = "utkarsh";
  string* address = &name;
  reverse (address, 0,1);
  cout << name;
}
// comment ==  so if let say we have nums array then &nums is the address of the block 
//  nums is the address of the first element 
//  &num + 1 => move next to the whole block 
//  num + 1 move to the next element 
//  for string => &name is the whole block address so (*name) print the value althought if we print the &name we could get the first elements address 
//  for first we have to do &name[0];
