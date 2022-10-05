#include <iostream>
 
using namespace std;
 
int main()
{
    int f,s,succeed=0;
 
 
    cin>>f>>s;
 
 
    string str[f];
 
    for(int i =0 ; i<f; i++)
    {
 
        cin>>str[i];
    }
    int arr[f][s];
 
    for(int i = 0 ; i<f; i++)
    {
        for(int h=0; h<s; h++)
        {
            string k = str[i];
            arr[i][h] =(k[h]-'0');
 
        }
    }
    for(int i = 0 ; i<f; i++)
    {
        for(int h=0 ; h<s; h++)
        {
 
 
            bool b =1;
            for(int x=0; x<f; x++)
            {
 
                if(arr[i][h]< arr[x][h])
                {
                    b=0;
 
                }
 
 
 
 
            }
 
 
 
            if(b==1)
            {
 
                succeed++;
 
                break;
            }
 
 
        }
 
    }
 
    cout<<succeed;
 
    return 0;
}