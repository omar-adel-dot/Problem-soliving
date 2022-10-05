
#include <iostream>
#include<stack>
 
using namespace std;
 
int main()
{
stack <int> g;
 
int size1;
cin>>size1;
for(int i = 0 ;i<size1;i++){
    string kilo;
    int num ;
    cin>>kilo;
    if(kilo=="push"){
       cin>>num ;
 
        g.push(num);
    }
    else if(kilo=="pop"){
        g.pop();
    }
    else if(kilo=="top"){
        cout<<g.top()<<endl;
    }
 
}
 
}