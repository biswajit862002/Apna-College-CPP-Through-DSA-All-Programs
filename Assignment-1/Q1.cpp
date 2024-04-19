// calculate the AREA of a rectangle.

#include<iostream>
using namespace std;

int main()
{
    double width,length,res;

    cout<<"Enter width & length of Rectangle : ";
    cin>>width>>length;

    res = width * length;

    cout<<"\nCalculate the area of a rectangle is : "<<res;

    return 0;
}