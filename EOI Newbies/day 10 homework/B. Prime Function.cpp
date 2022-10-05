#include <iostream>;
#include<cmath>
 
using namespace std;
int kilofra5(int n )
{
 
bool flag;
int m;
 
 
 
 for(int i=0;i<n;i++){
        flag=0;
         cin>>m;
          if(m==1||m==0){
        flag=1;
       }
 
       for(int x=2;x<=sqrt(m);++x){
        if(m%x==0){
            flag=1;
 break;
        }
       }
 
 
       if(flag==0){
        cout<<"YES\n";
       }
       else{
        cout<<"NO\n";
       }
 
 }
 
 
 
return 0;
}
 
 
int main()
{
 int n;
 cin>>n;
 kilofra5(n);}