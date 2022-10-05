#include <iostream>
#include<set>
#include<algorithm>
 
using namespace std;
 
int main()
{
    int S,r ;
    cin>>S>>r;
    int arr[S];
 
    for(int i = 0 ; i<S; i++)
    {
        cin>>arr[i];
    }
 
    double f,p;
    sort(arr,arr+S);
    while(r--)
    {
        cin>>f>>p;
 
 
        int w = lower_bound(arr,arr+S,(p/f))-arr;
        if(w==S)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<arr[w]<<endl;
        }
 
 
 
 
    }
}