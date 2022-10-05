#include <iostream>
#include<algorithm>
 
using namespace std;
 
int main()
{
   long long A ,Q,sum=0;
 
    cin>>A>>Q;
    long long arr[A+1];
 
 
    for(int i=1;i<=A;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=A;i++){
arr[i]+=arr[i-1];
    }
 
    int h, j;
    while(Q--){
 
 
 
        cin>>h>>j;
 
 
 cout<<arr[j]-arr[h-1]<<endl;
    }
 
}