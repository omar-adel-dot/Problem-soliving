#include <iostream>
#include<cmath>
 
using namespace std;
 
int main()
{
int x1 , x2 ,y1 ,y2 , x3 , y3 ,x4 , y4 ;
cin >> x1 >> y1 >> x2 >> y2 ;
// احنا هنا هنشوف لو ال كوردينات علي اكسيس واي
  if ( x1 == x2 ){
     int d = abs(y1-y2);
     x3 = x1 + d;
     x4 = x2 +d;
     y3 = y1 ;
     y4 = y2 ;
     cout<< x3 <<" "<< y3 <<" "<<x4<<" "<< y4 ; }
 // احنا هنا هنشوف لو ال كوردينات علي اكسيس اكس
else if (y1 == y2) {
         int d = abs(x1-x2);
    x3 = x1 ;
     
     x4  = x2 ;
    y3 = y1 +d;
     y4 = y2 +d;
     cout<< x3 <<" "<< y3 <<" "<< x4<<" " << y4 ; ;
}
// هنا هنشوف لو نقدر نعمل سكوار اصلان 
 else if ( abs(x1-x2) != abs (y1-y2)){
    cout<<-1;
 }
 // و ديه لو الكوردينات قصاد بعض 
 else
      {
         x3 = x2
         ;
y3 = y1 ;
x4= x1
         ;
y4 = y2 ;
cout<< x3 <<" "<< y3 <<" "<< x4<<" " << y4 ;
   
 
      }
return 0;}