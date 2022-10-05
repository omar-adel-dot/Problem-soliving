
#include <iostream>
#include<algorithm>
 
using namespace std;
 
int main()
{
 
 
int n,q,h,k;
cin>>n>>q;
int arr[n+1]={};
for(int i =0;i<q;i++){
  cin>> h>> k;
  if(h==1){
    arr[k]++;
  }
  if(h==2){
    cout<<arr[k]<<endl;;
  }
 
 
}
return 0;
 
}