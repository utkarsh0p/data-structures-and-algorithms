#include<iostream>
using namespace std;

string checkPalindrom(string &value, int i=0 , int j = -1){
  if( j == -1){
    j = value.size()-1;
  }
  if( i > j){
    return value;
  }
  swap(value[i], value[j]);
  return checkPalindrom(value, i+1, j-1);
}

int main() {
  string value;
  string checkvalue;
  while(checkvalue != "no"){
    cout << "Check Palindrom: ";
    cin >> value;
    checkvalue = value;
    string rev = checkPalindrom(value);
    if( rev == checkvalue) cout << "This is a palindrom";
    else cout << "Not Palindrom";
    cout << endl;
  }
}
