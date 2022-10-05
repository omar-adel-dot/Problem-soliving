#include <iostream>
#include<algorithm>
using namespace std;
 
 
int main(){
       int n;
cin>>n;
 
 long long arr[51];
 arr[1]=0;
 arr[2]=1;
 
 
     for(int i = 3 ; i<51; i++){
 
       arr[i]=arr[i-1]+arr[i-2];
     }
 
   /*  for(long long i = 0 ; i<n; i++){
 
           for(long long j = i+1 ;j<n;j++ ){
 
            if(arr[i]>arr[j])
                swap(arr[i],arr[j]);
 
           }
*/
 cout<<arr[n];
  }
 