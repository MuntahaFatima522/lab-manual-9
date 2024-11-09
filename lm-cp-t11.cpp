#include<iostream>
using namespace std;

int main()
{
    string line;
    cout<<"Enter a string: ";
    getline(cin,line);
    for(int i=0;line[i]!='\0';i++)
    {
        if((line[i]=='A') || (line[i]=='a') ||(line[i]=='E') ||(line[i]=='e') ||(line[i]=='I') ||(line[i]=='i') ||(line[i]=='O') ||(line[i]=='o') ||(line[i]=='U') ||(line[i]=='u'))
        {
            continue;
        }
        cout<<line[i];
    }
    return 0;
}