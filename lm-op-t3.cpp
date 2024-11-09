#include<iostream>
using namespace std;

void next(string word);

int main()
{
    string word;
    cout<<"Enter a string: ";
    getline(cin,word);
    cout<<"Shifted string: ";
    next(word);
    return 0;
}

void next(string word)
{
    for(int x=0;word[x]!='\0';x++)
    {
        if(word[x]=='Z')
        {
            word[x]='A';
        }
        if(word[x]=='z')
        {
            word[x]='a';
        }
        if(word[x]==' ')
        {
           word[x]=' '; 
        }
        else
        {
            word[x]=word[x]+1;
        }
        cout<<word[x];
    }
}
