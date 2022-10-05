#include <iostream>
#include<stack>
#include<algorithm>
 
using namespace std;
 
int main()
{
stack<char> g;
string str;
cin>>str;
int counter =0 ;
for(int i =0 ; i<str.size();i++){
    if(str[i]=='('){
        g.push('(');
 
    }
    else if(!g.empty()&&g.top()=='('&&str[i]==')'){
        counter+=2;
        g.pop();
    }
    else{
        g.push(')');
    }
}
 
cout<<counter<<endl;
 
 
}