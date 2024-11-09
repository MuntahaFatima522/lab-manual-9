#include<iostream>
using namespace std;

void position(string word);

int main()
{
    string word;
    cout<<"Enter a word: ";
    cin>>word;
    position(word);
    return 0;
}

void position(string word)
{
    for(int x=0;word[x]!='\0';x++)
    {
        cout<<word[x]<<" is found at position "<<x<<endl;
    }
}
