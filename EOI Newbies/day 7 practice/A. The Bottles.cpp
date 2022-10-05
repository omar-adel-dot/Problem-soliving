
#include <iostream>
#include<cmath>
using namespace std;
 
 
int main(){
     int n ,x,q,y;
     cin>>n>>q;
     int arr[n];
     for(int i =0 ;i<n;i++){
            
            cin>>arr[i];
       
     }
 
 
 
        for(int z =0 ; z<q;z++){
                cin>>x>>y;
          int t = arr[x-1]  ;
          arr[x-1]=arr[y-1];
          arr[y-1]=t;
          for(int i =0 ;i <n;i++){
            cout<<arr[i]<<" ";
          }
          cout<<endl;
 
 
 
     }
 
 
 
 }
 