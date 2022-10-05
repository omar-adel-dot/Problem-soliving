#include <iostream>
#include<algorithm>
 
using namespace std;
 
int main()
{ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
    long long Q,t,n,p,x;
    cin>>Q;
  while(Q--){
    cin>>t>>n>>p>>x;
 
 
    long long  r=1e18,l=0,mid,h;
    while(r>=l){
        mid=(r+l)/2;
 
      long long s = (mid/n)+(mid/p)+(mid/x) ;
      if(s>=t){
        h=mid;
        r=mid-1;
      }
      else if(s<t){
        l=mid+1;
      }
    }
    cout<<h<<"\n";
 
}
}