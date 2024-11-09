#include<iostream>
using namespace std;

void jazzifyChords(string chords[],int numChords);

int main()
{
    int numChords;
    cout<<"Enter the number of chords: ";
    cin>>numChords;
    string chords[numChords];
    cout<<"Enter "<<numChords<<" chords,one per line: "<<endl;
    for(int i=0;i<numChords;i++)
    {
        cin>>chords[i];
    }    
    jazzifyChords(chords,numChords);
    return 0;
}

void jazzifyChords(string chords[], int numChords)
{
    cout << "Jazzified chords: ";
    for (int i = 0; i < numChords; i++)
    {
        string chord = chords[i];
        
        if (chord[chord.length() - 1] != '7')
        {
            
            chord += "7";
        }
        cout << chord << " , ";
    }
    cout << endl;
}