//Write a program to find the sum of digits of a number until it becomes a single-digit number.
#include <iostream>
using namespace std;
int main() {
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    while(num>=10) {
        int sum=0;        
        while (num>0) {
            sum+=num%10; 
            num/=10;       
        }
         num=sum; 
    }

    cout<<"The sum of digits until it becomes a single-digit number is:"<<num<<endl;
    return 0;
}