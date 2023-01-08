#include<iostream>
using namespace std;
main()
{
 int hours;
 int minutes;
 int hourss;
 int minutess;
 int result;
  while (true)
 {
 cout<< "ENTER NUMBER OF THE HOURS= ";
 cin>> hours;
 cout<< "ENTER NUMBER OF THE MINUTES= ";
 cin>> minutes;

 if( (minutes+15) <= 59 )
{
  minutess=minutes + 15;
  hourss= hours;
}
 if( (minutes+15) >=60 )
{
 minutess= (minutes+15) - 60;
 hourss= hours + 1;
}
 if ( hours == 24 )
{
 hourss= 00;
}
 cout << "TIME AFTER 15 MINUTES IS : "<<hourss<<":"<<minutess<<endl ; 
 return 0;
}
}