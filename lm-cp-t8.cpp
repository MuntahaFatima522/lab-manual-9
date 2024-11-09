#include <iostream>
using namespace std;

void insertArrayMiddle(int firstArray[], int firstArraySize, int secondArray[], int secondArraySize);

int main()
{
    int firstArraySize, secondArraySize;
    cout << "Enter the number of elements for the first array(must be 2): ";
    cin >> firstArraySize;
    int firstArray[firstArraySize];
    cout << "Enter " << firstArraySize << " elements for the first array, one per line: " << endl;
    for (int i = 0; i < firstArraySize; i++)
    {
        cin >> firstArray[i];
    }
    cout << "Enter the number of elements for the second array: ";
    cin >> secondArraySize;
    int secondArray[secondArraySize];
    cout << "Enter " << secondArraySize << " elements for the second array, one per line: " << endl;
    for (int j = 0; j < secondArraySize; j++)
    {
        cin >> secondArray[j];
    }
    insertArrayMiddle(firstArray, firstArraySize, secondArray, secondArraySize);
    return 0;
}

void insertArrayMiddle(int firstArray[], int firstArraySize, int secondArray[], int secondArraySize)
{
    cout<<"Resulting Array: ";
    for (int i = 0; i < firstArraySize; i++)
    {
        cout << firstArray[i] << ",";
        if(i==firstArraySize-1)
        {
            break;
        }
        {
            for (int j = 0; j < secondArraySize; j++)
            {
                cout << secondArray[j] << ",";
            }
        }
    }
}