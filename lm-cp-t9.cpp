#include<iostream>
using namespace std;

bool canPayWithChange(double change[],double totalDue);

int main()
{
    double totalDue;
    bool result;
    string name[]={"quarters","dimes","nikles","pennies"};
    double change[4];
    for(int i=0;i<4;i++)
    {
        cout<<"Enter "<<name[i]<<" : ";
        cin>>change[i];
    }
    cout<<"Enter the total amount due: $";
    cin>>totalDue;
    result=canPayWithChange(change,totalDue);
    cout<<"Can you pay amount? ";
    if(result)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}

bool canPayWithChange(double change[],double totalDue)
{
    bool result=false;
    change[0]=change[0]*0.25;
    change[1]=change[1]*0.10;
    change[2]=change[2]*0.05;
    change[3]=change[3]*0.01;
    double total=0;
    for(int i=0;i<4;i++)
    {
        total=total+change[i];
    }
    if(total>=totalDue)
    {
        result=true;
    }
    return result;
}