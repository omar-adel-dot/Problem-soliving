#include <iostream>
#include<cmath>

using namespace std;
 
int main()
{
 
    int n,m;
    cin>>n>>m;
    if(n<m){
        cout<<-1;
        return 0;
    }
         int      j=n%2,  l =(n-j)/2+j,i=n;
    while(i--){
 
       if(n%2==0){
 
        if((n/2)%m==0){
 
            cout<<n/2;
            return 0 ;
        }
       }
 
 
 
 
 
        if(l%m==0){
 
 
 
       cout<<l;
        return 0;
 
        }
        else {
 
            l+=1;
 
 
        }
 
 
 
    }
 
    cout<<-1;
 
 
return 0;}