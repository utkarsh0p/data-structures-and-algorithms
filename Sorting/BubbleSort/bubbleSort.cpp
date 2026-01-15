#include <iostream>
#include<vector>
using namespace std;

int main(){
 vector<int>v = {3,4,2,5,3,1};

 for (int i=0 ; i<v.size() ; i++){
    for(int j=0 ; j<v.size() -i -1 ; j++){
        if(v[j]>v[j+1]){
            swap(v[j], v[j+1]);
        }
    }
 }

 for( int nums:v){
    cout<<nums;
 }

}