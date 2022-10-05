#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int size1;
  cin>>size1;
  string text;
  cin>>text;
  if(size1<26){
    cout<<"NO"<<endl;
    return 0 ;
  }
  else{
  for(int i = 0 ; i<size1;i++){
    text[i]=towlower(text[i]);
  }
  sort(text.begin(),text.end());
 
  int counter=0;
  for(int i = 0 ;i<size1;i++){
    if(text[i]!=text[i+1]){
        counter++;
    }
  }
 
  if(counter==26){
    cout<<"YES"<<endl;
    return 0 ;
  }
  else{
     cout<<"NO"<<endl;
    return 0 ;
  }
 
 
 
  }
}