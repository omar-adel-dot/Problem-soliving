#include <iostream>
#include<algorithm>
 
using namespace std;
 
int main()
{
    string s;
    cin>>s;
    int frq[200]={};
    for(int i =0;i<s.size();i++){
        frq[s[i]]++;
    }
 
 
    for(int i =0;i<200;i++){
        if(frq[i]>=1){
        char o = i;
        cout<<o<<" "<<frq[i]<<endl;
        }
    }
 
}