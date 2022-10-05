#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long m,n;
    cin>>m>>n;
    int a[m];
    for(int i =0 ; i<m; i++)
    {
        cin>>a[i];
    }
    int herv = n*-1;
 
 
    for(int i = herv;i<=n;i++){
            bool flag=0;
        for(int h=0 ;h<m; h++ ){
            if(i!=a[h]){
              flag=1;
            }
            else if(i==a[h]){
                flag=0;
                break;
            }
 
        }
        if(flag==1){
            cout<<i<<endl;
            break;
        }
    }
 
 
 
 
 
}
