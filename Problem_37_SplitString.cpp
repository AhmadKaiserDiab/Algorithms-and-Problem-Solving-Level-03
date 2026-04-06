#include<iostream>
#include<vector>
using namespace std;

string ReadString(string Message);
void SplitStringInVector(string Line , vector <string> & Words);
void PrintStringWords(string Line);

int main()
{
    string Line = ReadString("Please Enter Your String: ");
    PrintStringWords(Line);
}

string ReadString(string Message)
{
    string Line;
    cout<<Message<<endl;
    getline(cin,Line);
    cout<<endl;
    return Line;
}

//* This Works Only With one Character
void SplitStringInVector(string Line, char seperator, vector <string> & vWords)
{
    string Word = "";
    for (int i = 0; i < Line.length(); i++){
        if(Line[i] != seperator)
            Word = Word + Line[i];
        else 
        {
            vWords.push_back(Word);
            Word = "";
        }
    }
    if (Word != "")
    vWords.push_back(Word);
}

void PrintStringWords(string Line)
{
    vector <string> vWords;
    SplitStringInVector(Line , 'a' ,vWords);
    cout<<"Tokens = "<<vWords.size()<<endl;
    for(string & word : vWords)
        cout<<word<<endl;
}
