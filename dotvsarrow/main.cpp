#include<iostream>
using namespace std;

class A
{
public:
int b;
A()
{
b=5;
cout<<b<<endl;
}
};

int main()
{
A a =new A();
//cout<<"a.b = " <<a.b <<endl;

A *ptr;
ptr = new A();
cout<<"x->b = "<<x->b <<endl;
return 0;
}
