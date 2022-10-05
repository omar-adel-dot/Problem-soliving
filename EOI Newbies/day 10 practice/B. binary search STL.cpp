#include <iostream>;
#include<algorithm>;
 
using namespace std;
 
int main()
{
int n,q,a[100005];
 cin>>n>>q ;
 for(int i=0;i<n;i++){
    cin>>a[i];
 }
 sort(a,a+n);
 string qtype;
 int  x;
 while(q--){
    cin>>qtype>>x;
    int l =0 ,r=n-1,m;
    if(qtype=="binary_search"){
        while(l<r){
            m=(l+r)/2;
            if(a[m]<x){
                l=m+1;
 
            }
            else{
                r=m;
            }
        }
        if(a[r]==x){
            cout<<"found\n";
 
        }
        else{
            cout<<"not found\n";
        }
    }
    else if(qtype=="lower_bound"){
        while(l<r){
               m=(l+r)/2;
            if(a[m]<x){
                l=m+1;
 
            }
            else{
                r=m;
            }
        }
        if(a[r]>=x){
            cout<<a[r]<<endl;
 
        }
        else{
            cout<<"-1\n";
        }
 
 }
     else if(qtype=="upper_bound"){
        while(l<r){
               m=(l+r)/2;
            if(a[m]<=x){
                l=m+1;
 
            }
            else{
                r=m;
            }
        }
        if(a[r]>x){
            cout<<a[r]<<endl;
 
        }
        else{
            cout<<"-1\n";
        }
 
 }
}
}