// calculate the AVERAGE of 3 Numbers.

#include<iostream>
using namespace std;

int main()
{
    int a,b,c,sum=0;
    double avg;

    cout<<"Enter three numbers : ";
    cin>>a>>b>>c;

    sum = a+b+c;
    avg = sum/3.0;

    cout<<"\nAverage of three numbers is = "<<avg;

    return 0;
}