//There will be a frequency give which you have to find the number in the list appearing more than the frequency
/*
    approach 1 = Brute force
    approach 2 = Sort and count the frequecy if equal give back
    approach 3 = Moore's voting algorithm
*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
     vector<int>v = {2,2,3,3,3,3,1,1};

     int frequency=0 , candidate =0;
     for(int i=0 ; i< v.size() ; i++){
        if(frequency  == 0 ){
            candidate = v[i];
        }
        if(candidate == v[i]){
            frequency++;
        }
        else frequency--;
     }

     cout<<candidate;
}

//moore's voting algo asumes there is one  majority element mush present ( must be more that n/2 times repeating where n is the number of the elements in an array )