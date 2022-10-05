#include <iostream>
#include<algorithm>
 
using namespace std;
 
int main()
{
    long long A,Q,ii=0,kk,num;
 
    cin>>A>>Q;
    int arr[A+1]={0};
 
    for(int i =0 ; i<A; i++)
    {
        cin>>arr[i];
    }
        sort(arr,arr+A);
 
 
 
 
 
   for(int i =0 ; i<Q; i++){
        cin>>kk;
      ii=upper_bound(arr,arr+A,kk)-arr;
      if(arr[ii]==0){
        cout<<-1<<endl;
        continue;
      }
      cout<<arr[ii]<<endl;
    }
 
 
}