// include library
#include <iostream>
using namespace std;
//main function
int main()
{
//declaring values 
int a=55500;
char b=55;
float c=1.02;
double d=2.015;
bool e=1;
short int f=5;
long double g=123456789;

long int h=123;
//size

cout<<"the size of integer is"<<sizeof(a)<<endl;
cout<<"the size of character is"<<sizeof(b)<<endl;
cout<<"the size of floating pt no. is"<<sizeof(c)<<endl;
cout<<"the size of dbl floating no. is"<<sizeof(d)<<endl;
cout<<"the size of boolean value is"<<sizeof(e)<<endl;
cout<<"the size of short int is"<<sizeof(f)<<endl;
cout<<"the size of long dbl is"<<sizeof(g)<<endl;
cout<<"the size of long int is"<<sizeof(h)<<endl;

return 0;

}

