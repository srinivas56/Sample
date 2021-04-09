#include<iostream>
using namespace std;

int Add(int a, int b)
{
return a+b;
}

int main()
{
int c;
int (*p)(int,int);
//p=&Add;
p=Add;
//c= (*p)(2,3);
c=p(2,5);
cout<<"Sum is : "<<c<<endl;
} 
