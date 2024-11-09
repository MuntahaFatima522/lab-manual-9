#include<iostream>
using namespace std;

double calculateTotalResistance(double resistance[],int size);

int main()
{
    int size;
    cout<<"Enter the number of resistors in series circuit: ";
    cin>>size;
    double resistance[size];
    cout<<"Enter "<<size<<" numbers one per line: "<<endl;
    for(int x=0;x<size;x++)
    {
        cin>>resistance[x];
    }
    cout<<"The total resistance of the series circuit is: "<<calculateTotalResistance(resistance,size)<<" ohms";
    return 0;
}

double calculateTotalResistance(double resistance[],int size)
{
    double total=0.0;
    for(int i=0;i<size;i++)
    {
        total=total+resistance[i];
    }
    return total;
}