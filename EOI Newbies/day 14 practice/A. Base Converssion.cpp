#include <iostream>
#include<vector>
 
using namespace std;
 
int main()
{
   int m ;
   cin>>m;
   for(int i = 0 ; i<m;i++){
    int h,go ;
    cin>>h;
    string s = "";
    while(h>0){
 
             go=0;
 
           go = h%2;
          char c = go+48;
 
         s+=c;
            h/=2;
 
 
 
 
 
 
 
    }
    for(int i =s.size()-1 ; i>=0;i--){
        cout<<s[i];
    }
     cout<<endl;
   }
}