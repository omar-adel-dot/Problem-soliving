#include <iostream>
#include<algorithm>
using namespace std;
 
 
int main(){
      long long n ;
     cin>>n;
 
long long arr[n];
 
 
     for(int i = 0 ; i<n; i++){
 
        cin>>arr[i];
        
 
     }
sort(arr,arr+n);
   /*  for(long long i = 0 ; i<n; i++){
 
           for(long long j = i+1 ;j<n;j++ ){
 
            if(arr[i]>arr[j])
                swap(arr[i],arr[j]);
 
           }
 
        }
 
*/
 
 cout<<arr[n-1]<<endl;
 for(int i = n-2 ;i>=0 ; --i){
  if(arr[n-1]!= arr[i])  {
    cout<<arr[i];
    break;
  }
 }
  }
 
 