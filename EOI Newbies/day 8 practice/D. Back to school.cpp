#include <iostream>
#include<algorithm>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
long long g;
cin>>g;
while(g--){
 
    long long h,k;
    cin>>h>>k;
    int arr[h]
    ;
    for(int i=0 ;i<h;i++){
        cin>>arr[i];
    }
    sort(arr,arr+h);
 
 
 
    int l =0 ,r=h-1;
    bool ok=0;
    while(r>l){
        if(arr[l]+arr[r]==k){
            ok=1;
            break;
        }
        else if((arr[l]+arr[r])>k){
            r--;
        }
        else
            l++;
    }
 
 
    cout<<(ok?"YES":"NO")<<endl;
}
}