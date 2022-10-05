#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
 int n;
 cin>>n;
 int a[n+1];
for(int i=1;i<=n;i++)
    cin>>a[i];
int ma=0,k=0;
for(int i=1;i<=n;i++)
    for(int j=i+1;j<=n;j++)
{
    k=__builtin_popcount(a[i]^a[j]);
    if(k>ma)
        ma=k;
 
 
}
cout<<ma<<endl;
}
    return 0;
}