// calculate the LARGEST of 3 Numbers.

#include<iostream>
using namespace std;

int main()
{
    int a,b,c,largest;

    cout<<"Enter three numbers : ";
    cin>>a>>b>>c;

    largest = (a>b) ? (a>c ? a : c) : (b>c ? b : c);

    cout<<"\nLargest numbers is = "<<largest;

    return 0;
}