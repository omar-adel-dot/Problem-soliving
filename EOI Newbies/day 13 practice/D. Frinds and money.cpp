#include <iostream>
#include<map>
#include<algorithm>
 
using namespace std;
 
int main()
{
map<string,long long> g;
 
 
long long size1,type;
cin>>size1>>type;
 
for(int i = 0 ;i<size1;i++){
    string koko;
    long long kiki;
    cin>>koko>>kiki;
      g[koko]=kiki;
}for(int i = 0 ;i<type;i++){
    string klkl;
    long long krkr,o;
    cin>>o>>klkl;
      if(o==1){
            cin>>krkr;
        g[klkl]+=krkr;
 
      }
      else if(o==2){
        cout<<g[klkl]<<endl;
      }
}
 
 
 
 
 
}