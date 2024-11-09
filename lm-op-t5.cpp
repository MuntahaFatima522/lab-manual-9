#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of times you want to enter number: ";
    cin>>n;
    int numbers[n];
    for(int x=0;x<n;x++)
    {
        cout<<"Enter number "<<x <<" : ";
        cin>>numbers[x];
    }
    cout<<endl<<endl;
    for(int y=0;y<n;y++)
    {
        cout<<"The number stored in "<<y<<" position of array is: "<<numbers[y]<<endl;
    }
    return 0;
}