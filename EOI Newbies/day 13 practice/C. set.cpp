#include <iostream>
#include<set>
#include<algorithm>
 
using namespace std;
 
int main()
{
set <int> g;
set<int>::iterator iit;
set<int>::iterator ytu;
 
int size1;
cin>>size1;
for(int i = 0 ;i<size1;i++){
    string kilo;
    int num ,find1;
    cin>>kilo;
    if(kilo=="insert"){
       cin>>num ;
 
        g.insert(num);
    }
    else if(kilo=="find"){
            cin>>find1 ;
 
        iit = g.find(find1);
        if(iit!=g.end()){
            cout<<"found"<<endl;
        }
        else cout<<"not found"<<endl;
    }
    else if(kilo=="lower_bound"){
            cin>>find1 ;
           ytu =g.lower_bound(find1);
 
        if(ytu!=g.end()){
            cout<<*ytu<<endl;
        }
    else cout<<-1<<endl;
    }
        else if(kilo=="upper_bound"){
            cin>>find1 ;
    ytu =g.upper_bound(find1);
        if(ytu!=g.end()){
            cout<<*ytu<<endl;
        }
    else cout<<-1<<endl;
    }
 
}
 
}