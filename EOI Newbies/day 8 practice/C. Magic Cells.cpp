#include <iostream>
#include<algorithm>
using namespace std;
 
 
int main(){
       int n,h ,res;
     cin>>n>>h;
 
 int arr[n][h];
 
 
     for(int i = 0 ; i<n; i++){
 
       for(int k  = 0 ;k<h;k++){
        cin>>arr[i][k];
       }
 
 
     }
 
   /*  for(long long i = 0 ; i<n; i++){
 
           for(long long j = i+1 ;j<n;j++ ){
 
            if(arr[i]>arr[j])
                swap(arr[i],arr[j]);
 
           }
 
        }
 
*/
 
res=n+h-2;
 for(int i = 0 ;i<n ; i++){
        for(int k = 0 ;k<h ; k++){
            if(arr[i][k]==1){
                res=min(res,i+k);
            }
        }
 
 }
 
 cout<<res;
  }
 
 