// print if a number N is EVEN or ODD.

#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter any numbers : ";
    cin>>n;

    if(n%2 == 0)
    {
        cout<<n<<" is a Even number";
    }
    else
    {
        cout<<n<<" is a Odd number";
    }

    return 0;
}