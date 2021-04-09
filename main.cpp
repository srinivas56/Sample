#include<iostream>
using namespace std;
int a=5;

void increment(int* z)
{
*z=*z+1;
cout<<"a = "<<a<<endl;
cout<<"Address in func "<<&a<<endl;
//return a;
}

int main()
{
int *p;
p=&a;
//cout<<p<<endl;
//cout<<&a<<endl;
//cout<<&p<<endl;
//cout<<*p<<endl;
//cout<<"Hello World!"<<endl;
increment(&a);
cout<<a<<endl;
cout<<"Address in local "<<&a<<endl;
}
