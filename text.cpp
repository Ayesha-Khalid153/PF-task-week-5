#include<iostream>
using namespace std;
string result1(int value1);
string result2(int value2);
main()
{
 int number,num1,num2;
 string first,second;
 cout <<"ENTER THE NUMBER= ";
 cin >>number;
 num1= number / 10;
 num2= number % 10;
 if( number >= 10)
{ 
  first= result1(num1);
}
  second=result2(num2);
  cout <<first<<" " <<second<<endl;
}
string result1(int value1)
{
 if(value1==1)
 {
 return "one";
 }
 if(value1==2)
 {
  return "twenty";
 }
  if(value1==3)
 {
  return "thirty";
 }
  if(value1==4)
 {
  return "forty";
 }
  if(value1==5)
 {
  return "fifty";
 }
  if(value1==6)
 {
  return "sixty";
 }
  if(value1==7)
 {
  return "seventy";
 }
  if(value1==8)
 {
  return "eighty";
 }
  if(value1==9)
 {
  return "ninety";
 }
 return 0; 
}
string result2(int value2)
{
  if(value2==0)
 {
  return " ";
 }
  if(value2==1)
 {
  return "one";
 }
  if(value2==2)
 {
  return "two";
 }
  if(value2==3)
 {
  return "three";
 } 
  if(value2==4)
 {
  return "four";
 }
  if(value2==5)
 {
  return "five";
 }
  if(value2==6)
 {
  return "six";
 }
  if(value2==7)
 {
  return "seven";
 }
  if(value2==8)
 {
  return "eight";
 }
  if(value2==9)
 {
  return "nine";
 }
return 0;
}
 