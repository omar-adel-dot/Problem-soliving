#include <iostream>
 
 
using namespace std;
 
 
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
       long long l;
 
       cin >>l;
        for(int i =0 ;i<l;i++ ){
                   long long f,h;
 
       cin>>h>>f;
       long long sum =h*(h+1)/2;
       if(sum<f){
        cout<<-1<<endl;
        continue;
 
       }
       int ans[100000];
       int cnt=0;
       for(int i =h ;i>0;i--){
        if(i<=f){
            ans[cnt]=i;
            cnt++;
            f-=i;
        }
 
       }
 
       cout<<cnt<<' ';
       for(int i=0 ; i<cnt;i++){
        cout<<ans[i]<<' ';
 
       }
 
       cout<<endl;
 
 
  }}