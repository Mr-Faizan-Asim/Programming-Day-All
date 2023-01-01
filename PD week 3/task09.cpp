#include<iostream>
using namespace std;
main()
{

int digit,a,b,c,d,a1,b1,c1;
cout<<"Enter Four Digit Number: ";
cin>> digit;
a= digit/1000;
a1 = digit%1000;
b = a1/100;
b1 = a1%100;
c = b1/10;
c1 = b1%10;
d = a + b + c + c1;
cout<<"Sum: "<<d;








}