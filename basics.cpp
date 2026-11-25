#include<bits/stdc++.h>
using namespace std;
int main(){
  //convert to binary
   int a; cin >> a;
   string s = "";
   while(a != 1){
     if( !(a%2)) s += '0';
     else{
       s += '0' + ( a % 2);
     }
     a /= 2;
   }
   s += '1';
   reverse(s.begin(), s.end());
   cout << s << '\n';
   
   //so now the binary to the decimal
   int decimal = 0;
   int p = 1;

   for(int t = s.size() - 1; t >= 0; t--)
   {
     int n = s[t] - '0';
     if(n) decimal += p; 
     p = p * 2;
   }
   cout << decimal;

}
