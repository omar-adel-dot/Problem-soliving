#include <iostream>
#include<set>
#include<stack>
 
using namespace std;
 
int main()
{
    char S ;
    cin>>S;
    int h ;
    cin>>h;
    int arr[h];
    for(int i =0 ;i<h;i++){
        cin>>arr[i];
    }
 
    for(int i =0 ;i<h;i++){
           for(int b =0 ;b<arr[i];b++){
       cout<<S;
    }
    cout<<endl;
    }
}