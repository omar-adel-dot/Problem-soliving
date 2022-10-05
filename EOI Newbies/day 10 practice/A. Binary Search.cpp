#include <iostream>
#include <algorithm>
 
 
using namespace std;
 
 
int main(){
    long long a,b,l,r,m,h;
    bool flag = 1;
    cin>>a>>b;
    long long arr[a];
    for(int i =0 ;i <a;i++){
 
            cin>>arr[i];
 
    }
 
   sort(arr,arr+a);
        
 
 
     for(int k = 0;k<b;k++){
            r=a-1;
     l=0;
     flag=1;
            cin>>h;
        while(r>=l){
            m=(r+l)/2;
             if(arr[m]==h){
            cout<<"found"<<endl;
            flag=0;
            break;
        }
            else if(h>arr[m]){
                l=m+1;
 
            }
 
 
 
 
            else{
               r=m-1;
            }
 
        }
        if(flag==1){
cout<<"not found"<<endl;}
 
     }
}