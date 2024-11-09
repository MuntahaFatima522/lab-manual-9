#include<iostream>
using namespace std;

int findLargestNumber(int arr[],int size);

int main()
{
    int size;
    cout<<"Enter the number of elements: ";
    cin>>size;
    int arr[size];
    cout<<"Enter "<<size<<" numbers one per line: "<<endl;
    for(int x=0;x<size;x++)
    {
        cin>>arr[x];
    }
    cout<<"The largest entered number is: "<<findLargestNumber(arr,size);
    return 0;
}

int findLargestNumber(int arr[],int size)
{
    int max=arr[0];
    for(int i=1;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}