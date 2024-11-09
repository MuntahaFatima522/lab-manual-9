#include<iostream>
using namespace std;

int main()
{
    string word1="something ";
    string a;
    cout<<"Enter the argument 'a': ";
    getline(cin,a);
    string result=word1+a;
    cout<<result;
    return 0;
}