#include <iostream>
#include<algorithm>
 
using namespace std;
 
int main()
{ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0);
 
   int A ,Q,sum=0;
 
    cin>>A;
    int arr[A];
 
 
    for(int i=0;i<A;i++){
        cin>>arr[i];
 
     }
 
 
   sort(arr,arr+A);
 
 
 
    for(int i=0;i<A;i++){
        cout<<arr[i]<<" ";
 
     }
}