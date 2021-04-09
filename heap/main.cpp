#include<iostream>
using namespace std;

int main()
{
int *p = new int; 
int *q = new int();
cout<<*p<<endl;
cout<<*q<<endl;
*q = 100;

cout<<&p<<endl;
cout<<p<<endl;
cout<<&q<<endl;
cout<<q<<endl;
cout<<*q<<endl;
}
