/*
int *a = new int;
a is pointing to default-initialized object (which is uninitialized object in this case i.e the value is indeterminate as per the Standard).

int *a = new int();
a is pointing to value-initialized object (which is zero-initialized object in this case i.e the value is zero as per the Standard).
*/

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
