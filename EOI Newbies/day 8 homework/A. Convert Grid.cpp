#include <iostream>
 
 
using namespace std;
 
 
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long a,b;
    bool flag = 1;
    cin>>a>>b;
    long long arr1[a][b],arr2[a][b];
    for(int i =0 ;i <a;i++){
        for(int x = 0 ;x<b;x++){
            cin>>arr1[i][x];
        }
    }
     for(int i =0 ;i <a;i++){
        for(int x = 0 ;x<b;x++){
            cin>>arr2[i][x];
        }
    }
 
 
 
    for(int i =0 ;i <a;i++){
        for(int x = 0 ;x<b;x++){
            if(arr1[i][x]!=arr2[i][x]){
 
 
                  if(arr1[i][x]%arr2[i][x]!=0||(arr1[i][x]*-1)%arr2[i][x]!=0){
 
                    flag=0;
                    break;
                  }
 
 
 
        }
         }
    }
if(flag==1){
    cout<<"YES";
}
else{
    cout<<"NO";
}
}