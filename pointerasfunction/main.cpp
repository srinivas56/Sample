#include<iostream>
using namespace std;

int *Add(int *a, int *b)
{
int *c = new int;
*c = (*a) + (*b);
cout<<"Sum in Add :" <<*c<<endl;
return c;
}

int main()
{
int a=2, b=4;
int *ptr = Add(&a, &b);
cout<<"Sum is :"<<*ptr<<endl;
}
