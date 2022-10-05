#include <iostream>
#include<cmath>
 
using namespace std;
 
int main()
{
 
   int m ;
   cin>>m;
   for(int i = 0 ; i<m;i++){
       int sum=0,j=0,t=0;
    int h,go ;
    cin>>h;
    string s = "";
 
    while(h>0){
 
             go=0;
 
           go = h%2;
          char c = go+48;
 
         s+=c;
            h/=2;
 
 
          if(go==1){
            j++;
 
 
          }
 
 
 
 
    }
 
    for(int i =0 ; i<j;i++){
 
 
     t= pow(2,i);
     sum+=t;
    }
    cout<<sum<<endl;
 
   }
 
}