#include<iostream>
using namespace std;
int evenOdd(int number);
main()
{
 int number,result;
  int sum;

 cout <<"enter the 5 digits number= ";
 cin >>number;
 result= evenOdd(number);
 cout <<"result is even  "<<result;
}
int evenOdd(int number)
{ 
 int q1,q2,q3,q4,r1,r2,r3,r4;
 int sum;
 int odd;
 int even;
 q1= number / 10;
 r1= number % 10;
 q2= q1 / 10;
 r2= q1 % 10;
 q3= q2 / 10;
 r3= q2 % 10;
 q4= q3 / 10;
 r4=q3 % 10;
 sum= r1 + r2 + r3 + r4 + q4;
 if(sum%2 == 0)
{ 
return 0;
}
if(sum%2 != 0)
{
return 1;
}
}