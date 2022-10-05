#include <iostream>
#include<set>
#include<stack>
 
using namespace std;
 
int main()
{
    set<int> j;
    set<int> ::iterator c;
 
    int f;
    cin>>f;
    int arr[f];
    for(int i = 0 ; i<f; i++)
    {
        ;
        cin>>arr[i];
 
    }
    int b,elmanga=0,l=0,r=f-1 ;
    cin>>b;
    for(int i = 0 ; i<b; i++)
    {
        char m;
 
 
        cin>>m;
        if(m=='L')
        {
            if(r>=l)
                j.insert(arr[l++]);
 
        }
 
 
        else if(m=='R')
        {
            if(r>=l)
                j.insert(arr[r--]);
 
        }
 
        else
        {
            if(!j.empty())
            {
                c=j.end();
                c--;
                cout<<*c<<endl;
                j.erase(c);
            }
            else
            {
                cout<<-1<<endl;
            }
        }
    }
}