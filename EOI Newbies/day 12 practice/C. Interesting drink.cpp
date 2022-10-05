#include <iostream>
#include<algorithm>
 
using namespace std;
 
int main()
{
    long long A,Q,ii=0;
 
    cin>>A;
    int arr[A];
 
    for(int i =0 ; i<A; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+A);
 
 
   cin>>Q;
   long long coins;
    while(Q--)
 
    {   cin>>coins;
    if(coins>=arr[A-1]){
 
     cout<<A<<endl;
    }
    else if(coins<arr[0]){
        cout<<0<<endl;
    }else{
        ii=upper_bound(arr,arr+A,coins)-arr;
 
 
 
     cout<<ii<<endl;
    }
    }
}