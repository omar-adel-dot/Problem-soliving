#include <iostream>
#include<map>
#include<algorithm>
 
using namespace std;
 
int main()
{
string password;
cin>>password;
map<string,int> g;
 
for(int i = 0 ;i<10;i++){
    string paswordtips;
    cin>>paswordtips;
    g[paswordtips]=i;
}
 
for(int i = 0 ;i<80;i+=10){
    string val= password.substr(i,10);
    cout<<g[val];
}
 
 