#include <iostream>
#include<cmath>
using namespace std;
 
 
int main(){
     int n ,x=0;
     cin>>n;
     bool flag=0;
     int arr[n];
     for(int i =0 ;i<n;i++){
 
            cin>>arr[i];
 
     }
 
 
 
      while(true){
 
        for(int i =0 ;i<n ;i++){
            if(arr[i]%2!=0){
               flag=1;
               break;
            }
            arr[i]/=2;
        }
 
        if(flag==1){
            cout<<x<<endl;
            break;
        }
        else x++;
 
      }
 
 
 
 
 }
 