#include <iostream>
#include<queue>
 
using namespace std;
 
int main()
{
queue <int> g;
 
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
    else if(kilo=="front"){
        cout<<g.front()<<endl;
    }
     else if(kilo=="back"){
        cout<<g.back()<<endl;
    }
 
}
 
}