#include <iostream>
#include<algorithm>
 
using namespace std;
 
int main()
{
   long long A ,Q,sum=0;
 
    cin>>A;
    long long arr[A+1];
   long long arr2[A+1]={0};
 
 
    for(int i=1;i<=A;i++){
        cin>>arr[i];
        arr2[i]=arr[i];
    }
     sort(arr2+1,arr2+A+1);
    for(int i=1;i<=A;i++){
           arr[i]+=arr[i-1];
           arr2[i]+=arr2[i-1];
 
    }
 
    int t,h, j;
    cin>>Q;
    while(Q--){
 
 
 
        cin>>t>>h>>j;
        if(t==1){
 
 
 cout<<arr[j]-arr[h-1]<<endl;}
 else{
 
   cout<<arr2[j]-arr2[h-1]<<endl;
 }
    }
 
}