#include <iostream>
#include<algorithm>
 
using namespace std;
 
using namespace std;
 
int main()
{
 unsigned  long long n,q,x,b;
 unsigned long long counter=0;
 cin>>n>>q>>x ;
 
 
 
 
 
 
    long long l =n ,r=q,m;
 
        while(r>=l){
            m=(l+r)/2;
            counter++;
                if(m==x){
 
                        cout<<counter<<endl;
                        break;
                       }
           else if(m<x){
                l=m+1;
 
            }
 
            else{
                r=m-1;
            }
        }
 
}