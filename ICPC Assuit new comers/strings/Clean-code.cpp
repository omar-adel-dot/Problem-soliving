#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string s;
    /* // */
    bool flage2 =0 ;
    while(getline(cin,s))
    {
        bool flage=0;
        if(s.size()==0||s==" ")
        {
            continue;
        }
 
        for(int i =0 ; i<s.size(); i++)
        {
            if(s[i]=='/'&&s[i+1]=='/'&&flage2==0)
                break;
 
            else if(s[i]=='/'&&s[i+1]=='*')
            {
                i++;
                flage2=1;
            }
 
 
 
 
            else if(s[i]=='*'&&s[i+1]=='/'&&flage2==1)
            {
                i++;
 
                flage2=0;
            }
            
            else if(flage2==0)
            {
 
                cout<<s[i];
                flage=1;
            }
 
 
 
        }
 
 
        if(flage==1&&flage2==0)
            cout<<endl;
    }
    return 0;
}