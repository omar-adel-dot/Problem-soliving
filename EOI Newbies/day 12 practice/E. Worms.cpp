#include <iostream>
#include<algorithm>
 
using namespace std;
 
int main()
{
    long long A,Q,ii=0,kk,num;
 
    cin>>A;
    int arr[A+1]={0};
 
    for(int i =1 ; i<=A; i++)
    {
        cin>>arr[i];
    }
        for(int i =1 ; i<=A; i++)
    {
        arr[i]=arr[i]+arr[i-1];
 
    }
   
    cin>>Q;
 
 
   for(int i =0 ; i<Q; i++){
        cin>>kk;
      ii=lower_bound(arr+1,arr+A+1,kk)-arr;
 
      cout<<ii<<endl;
    }
 
 
}
