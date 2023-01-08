#include <iostream>
using namespace std;
int output(int volume,int P1,int P2,float hours);
main()
{
int volume,P1,P2;
float hours;
int result;
cout <<"ENTER THE VOLUME OF THE POOL [RANGES FROM (1 TO 10000)]= ";
cin  >>volume;
cout <<"ENTER THE FLOW RATE OF WATER FROM PIPE 1 [RANGES FROM (1 TO 5000)]= ";
cin  >>P1;
cout <<"ENTER THE FLOW RATE OF WATER FROM PIPE 2 [RANGES FROM (1 TO 5000)]= ";
cin  >>P2;
cout <<"ENTER THE HOURS WHEN WORKER WENT AWAY[RANGES FROM (1.0 TO 24.0)]= ";
cin  >>hours;
result=output(volume, P1, P2, hours);
}
int output(int volume,int P1,int P2,float hours)
{
int pipe1;
int pipe2;
int overflow;
int full;
full= ((P1*hours) + (P2*hours))*100/volume;
P1= (P1*100)/P1+P2;
P2=100-P1;
if(full<=volume)
{
cout<< "the pool is "<<full<<"% full..."<<"pipe 1= "<<pipe1<<"%. pipe 2 : "<<pipe2<<"%."<<endl;
}
if(full>volume)
{
 int overflow=((((P1*hours)+(P2*hours))*100)/volume)-volume;
 cout<< "For "<<hours<<" hours the pool overflows with "<<overflow<<" liters."<<endl;  
}
}