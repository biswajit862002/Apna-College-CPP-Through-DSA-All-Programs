// In a program, input the side of a square. You have to output the area of the square.

#include<iostream>
using namespace std;

int main()
{
    float l,w,area;

    cout<<"Enter Length & Width of Square : ";
    cin>>l>>w;

    area = l*w;

    cout<<"Area of a Square is = "<<area;

    return 0;
}