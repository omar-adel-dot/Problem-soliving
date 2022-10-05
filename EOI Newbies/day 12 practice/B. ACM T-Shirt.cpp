#include <iostream>
#include<algorithm>
 
using namespace std;
 
int main()
{
    long long A,Q;
 
    cin>>A>>Q;
    int arr[A];
 
    for(int i =0 ; i<A; i++)
    {
        cin>>arr[i];
    }
        sort(arr,arr+A);
 
    long long size1,third,index;
    while(Q--)
    {
 
        cin>>size1;
        index=lower_bound(arr,arr+A,size1)-arr;
        if(index==A){
            cout<<arr[A-1];
        }
        else if(index==0){
            cout<<arr[index];
        }
        else if(abs(size1-arr[index])<abs(size1-arr[index-1])){
             cout<<arr[index];
        }
 
        else{
            cout<<arr[index-1];
        }
        cout<<endl;
    }
 
}