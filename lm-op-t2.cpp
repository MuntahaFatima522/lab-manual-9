#include<iostream>
using namespace std;

void reverse(string word);

int main()
{
    string word;
    cout<<"Enter a string: ";
    cin>>word;
    cout<<"Reverse string: ";
    reverse(word);
    return 0;
}

void reverse(string word)
{
    int count=0;
    for(int x=0;word[x]!='\0';x++)
    {
        count++;
    }
    for(int y=count;y>=0;y--)
    {
        cout<<word[y];
    }
}