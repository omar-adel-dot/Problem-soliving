#include <iostream>
#include<cmath>
using namespace std;
 
 
int main(){
     int n,a,m ;
     cin>>n>>a;
     bool isEqual = 0;
     int arr[n][a];
 
     for(int i =0 ;i<n;i++){
 
 
                for(int z = 0 ;z<a;z++){
                    cin>>arr[i][z];
                }
 
 
 
 
 
     }
      cin>>m;
     for(int i =0 ;i<n;i++){
 
 
      for(int k =0 ;k<a ;k++){
 
          if(m==arr[i][k]){
            isEqual=1;
            break;
          }
      }
 
 
     }
 
 
 
 
 
 
 
    if(isEqual==1){
        cout<<"will not take number";
    }
    else{
        cout<<"will take number";
    }
 
  }
 