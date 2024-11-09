#include <iostream>
using namespace std;

bool isAlreadyEntered(int arr[], int n, int x);

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    int i = 0;
    int unique[i];
    cout << "Enter " << n << " numbers one per line: " << endl;
    for (int x = 0; x < n; x++)
    {
        cin >> arr[x];
        if (isAlreadyEntered(arr, n, arr[x]))
        {
            cout << "Already entered: " << arr[x] << endl;
        }
        else
        {
            unique[i] = arr[x];
            i++;
        }
    }
    cout << "Unique numbers entered: ";
    for (int j = 0; j < i; j++)
    {

        cout << unique[j] << "  ";
    }
    return 0;
}

bool isAlreadyEntered(int arr[], int n, int x)
{
    bool result = false;
    for (int y = x-1 ; y >= 0 ; y--)
    {
       if (x== 0)
       {
        result=false;
       }
       else if (arr[x] == arr[y])
        {
            result = true;
            break;
        }
    }
    return result;
}