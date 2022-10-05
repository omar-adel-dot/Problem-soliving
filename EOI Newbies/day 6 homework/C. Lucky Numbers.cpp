#include <iostream>
 
using namespace std;
 
 
int main() {
 
    int n=0,N;
 cin >> N;
    bool islucky=false,stop=true,stop2=true,islucky2=false;
    long long A[N],next,i,next2,k2,k;
 
 
 
    for( i = 0; i <= N-1; i++){
       cin>> A[i];
 
 
 
 
    }
 for(int t=0  ; t <=N-1; t++){
      k2=A[t];
 
 
     while(k2>0){
 
        next2 = k2%10;
        k2=k2/10;
 
 
        if(next2==4 || next2==7){
 
            islucky2 = true;
 
            if(k2<=0){
                stop2=false;
            }
 
 
        }
        else if(next2!=4||next2!=7){
            islucky2 = false;
 
            break;
 
 
        }
     }
 
     if(islucky2 == true&&stop2==false){
 
    ++n;
 
 
 
     }}
 
 
cout<<n<<endl;
 
    for(int t=0  ; t <=N-1; t++){
      k=A[t];
 
 
     while(k>0){
 
        next = k%10;
        k=k/10;
 
 
        if(next==4 || next==7){
 
            islucky = true;
            ++n;
            if(k<=0){
                stop=false;
            }
 
 
        }
        else if(next!=4||next!=7){
            islucky = false;
            --n;
            break;
 
 
        }
     }
 
     if(islucky == true&&stop==false){
 
 
 
        cout<< A[t]<<" ";
 
     }
 
 
 
 
 
 
 
}
 }