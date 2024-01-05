#include<iostream>
using namespace std;

int main()
{
int base,expo,i,result=1;
cout<<"enter a number for base and exponential power";
cin>>base;
cout<<"enter a number for exponential power";
cin>>expo;
for (i=0;i<expo;i++)
{
    result=result*base;
}
cout << base << "^" << expo << " = " << result << endl;
     
    return 0;
}




