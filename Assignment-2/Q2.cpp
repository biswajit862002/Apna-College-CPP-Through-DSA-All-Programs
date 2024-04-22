// Enter cost of 3 items from the user (using float data type) - a pencil, a pen and an eraser. You have to output the total cost of the items back to the user as their bill. (Add on : You can also try adding 18% GST tax to the items in the bill as an advanced problem)

#include<iostream>
using namespace std;

int main()
{
    float pencil,pen,eraser,total;
    float total_with_gst;
    float GST = 18.0f;

    cout<<"Enter Price of Pencil, Pen & Eraser : ";
    cin>>pencil>>pen>>eraser;

    total = pencil + pen + eraser;
    total_with_gst = (total + (total * (GST/100)));

    cout<<"Total Cost of Three item is With GST = "<<total_with_gst<<endl;

    return 0;
}