#include <iostream>
 
using namespace std;
 
int main()
{
string d,h;
cin>>h>>d;
int v=0;
 
for(int i =0;i<d.size();i++){
 
    v+=(d[i]-'0');
}
cout<<v;
}