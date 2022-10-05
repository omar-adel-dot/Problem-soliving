#include <iostream>
#include<cmath>
using namespace std;
 
 
int main(){
     int n ,d1=0,d2=0;
     cin>>n;
 
     int arr[n][n];
     for(int i =0 ;i<n;i++){
 
            for(int c=0 ; c<n;c++){
                cin>>arr[i][c];
 
 
     }
 
 
     }
 
     for(int i =0 ;i<n;i++){
 
            d1+=arr[i][i];
            d2+=arr[i][n-1-i];
 
     }
 
 
 
 
 
 
   cout<<abs(d1-d2)<<endl;}