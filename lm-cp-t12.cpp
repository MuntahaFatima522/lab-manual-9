#include<iostream>
using namespace std;

bool isSpecialArray(int arr[],int size);

int main()
{
    bool result;
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter "<<size<<" elements of the array: "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    result=isSpecialArray(arr,size);
    if(result)
    {
        cout<<"The array is special";
    }
    else
    {
        cout<<"The array is not special";
    }
    return 0;
}

bool isSpecialArray(int arr[],int size)
{
    bool result1,result2,result;
    for(int i=0;i<size;i++)
    {
        if(i%2==0)
        {
            if(arr[i]%2==0)
            {
                result1=true;
            }
            else
            {
                result1=false;
            }
        }
        else
        {
            if(arr[i]%2!=0)
            {
                result2=true;
            }
            else
            {
                result2=false;
            }
        }
    }
    result=result1&&result2;
    return result;
}

