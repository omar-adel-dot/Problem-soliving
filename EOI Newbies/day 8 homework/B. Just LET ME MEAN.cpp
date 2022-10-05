#include <iostream>
 
 
using namespace std;
 
 
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
       long long l;
 
       cin >>l;
        for(int i =0 ;i<l;i++ ){
                   long long f,h,sum=0,j=0;
 
       cin>>h>>f;
       int arr[h];
 
 
       for(int i =0 ;i<h;i++) {
        cin>>arr[i];
       }
 
         for(int i =0 ;i<h;i++) {
          sum+=arr[i];
       }
 
 
        j=f*(h+1)-sum;
 
 
           if(j>=0)
 
        cout<<"YES"<<endl;
 
        else
            cout<<"NO"<<endl;
  }}