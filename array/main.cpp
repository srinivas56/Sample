#include<iostream>
using namespace std;
int main()
{
int A[] = {2,4,5,8,1};
cout<<A<<endl;
cout<<&A[0]<<endl;
cout<<A[0]<<endl;
cout<<*A<<endl;

for(int i=0;i<5;i++)
{
cout<<&A[i]<<endl;
cout<<A+i<<endl;
cout<<A[i]<<endl;
cout<<*(A+i)<<endl;
}
}
