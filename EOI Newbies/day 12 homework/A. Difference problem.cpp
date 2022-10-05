#include <iostream>
#include<algorithm>
 
using namespace std;
 
int main()
{
    string h;
    long long counter=0;
 
    cin>>h;
 
    long long isze=h.size();
 
    for(int i =0 ;i<isze;i++)
    {
       if((h[i]-48)>0){
        counter++;
       }
    }
 
      cout<<abs(counter-(isze-counter))<<endl;
 
 
}