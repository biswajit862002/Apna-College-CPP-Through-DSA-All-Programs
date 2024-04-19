// print all multiples of 3 from 10 to 50.

#include<iostream>
using namespace std;

int main()
{
    int n=3,i;

    for(i=10; i<50; i++)
    {
        if(i%n == 0)
        {
            cout<<i<<" ";
        }
    }

    return 0;
}