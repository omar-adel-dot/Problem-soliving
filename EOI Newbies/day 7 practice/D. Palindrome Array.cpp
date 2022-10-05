#include <iostream>
#include<cmath>
using namespace std;
 
 
int main(){
     int n,reversed,a ;
     cin>>n;
     bool isEqual = 0;
     int arr[n];
 
     for(int i =0 ;i<n;i++){
 
 
                cin>>arr[i];
 
 
 
 
 
     }
 
 
 
 
      for(int k =0 ;k<n/2 ;k++){
        if(arr[k]!=arr[n-1-k]){
            isEqual=1;
            break;
        }
       
      
 
 
     }
 
 
 
     if(isEqual==1){
        cout<<"NO"<<endl;
     }
     else cout<<"YES"<<endl;
 
 
 
 
 
 
  }
 