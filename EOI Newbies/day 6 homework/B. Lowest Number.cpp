#include <iostream>
 
using namespace std;
 
 
int main() {
 
    int n,k=1,N ,minimum,i;
 
    cin >> N;
    int A[N];
 
 
 
    for( i = 0; i <= N-1; i++){
       cin>> A[i];
 
 
 
 
    }
 
    minimum=A[0];
    for(int t=0  ; t <=N-1; t++){
 
 
 
     if(A[t]< minimum){
         minimum=A[t];
         k=(t+1);
     }
 
 
 
 
 
 
 
 
}
 cout<<minimum<<" "<< k<<endl;}