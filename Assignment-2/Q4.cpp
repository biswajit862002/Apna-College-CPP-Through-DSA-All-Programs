// Write a program to calculate the area of a circle.

#include<iostream>
using namespace std;

int main()
{
    float radius,result;

    cout<<"Enter Radius of Circle : ";
    cin>>radius;

    result = 3.14 * radius * radius;

    cout<<"Calculate the area of Circle is = "<<result<<endl;

    return 0;
}