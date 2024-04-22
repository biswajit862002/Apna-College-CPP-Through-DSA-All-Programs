// Build a Simple Interest Calculator.

#include<iostream>
using namespace std;

int main()
{
    float principal, rate, time, SI;

    cout<<"Enter Principal, Rate & Time : ";
    cin>>principal>>rate>>time;

    SI = (principal * rate * time)/100;

    cout<<"Simple Interest is = "<<SI<<endl;

    return 0;
}