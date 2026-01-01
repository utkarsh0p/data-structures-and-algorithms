// There is a target given and we have to find the combination of two nums which is equal to the target in the sorted array
#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int>v = {2,3,4,5};
    int target = 6;


    for(int i=0 ; i< v.size()-1; i++){
        for (int j = i+1 ; j< v.size() ; j++){
            if(v[i]+v[j] == target){
                cout<<i<<" "<<j;
                break;
            }
        }
    }
}