#include<iostream>
#include<cmath>
using namespace std;
main ()
{
 float a,b,c;
 float power;
 float multiply;
 float substraction;
 float squareRoot;
float addition;
 float division;
 cout << " ENTER VALUE OF a= ";
 cin  >> a;
 cout << " ENTER VALUE OF b= ";
 cin  >> b;
 cout << " ENTER VALUE OF c= ";
 cin  >> c;
int check;
 power= b* b;
cout << power;
//cin >> check;
 multiply= 4 * a * c;
cout << multiply;
//cin >> check;
 substraction= power - multiply;
cout << substraction;
//cin >> check;
 squareRoot = sqrt(substraction);
cout << squareRoot;
//cin >> check;
 addition= squareRoot - b;
cout << addition;
//cin >> check;
 division = addition / (2*a);
cout << division;
//cin >> check;
 cout <<"THE RESULT OF FORMULA IS= "<< division;
}