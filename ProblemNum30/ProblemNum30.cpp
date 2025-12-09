#include <iostream>
#include <string>
#include <cctype>
using namespace std;

/*Write a program to read a string and read a character 
then count the character in that string*/

string ReadString()
{
    string S;
    cout << "Please enter your string ?\n";
    getline(cin, S);
    return S;
}
char ReadCharacter()
{
    char c;
    cout << "Please enter a character ?\n";
    cin>> c;
    return c;
}
short CountLetter(string S,char Letter)
{
    short CountLetterNum = 0;

    for (int i = 0; i < S.length(); i++)
    {
        if ((S[i]) == Letter)
            CountLetterNum++;
    }

    return  CountLetterNum;
}

int main()
{
    string S1 = ReadString();
    char C= ReadCharacter();

    cout << "\nLetter " <<"\'"<< C<<"\'" << " Count = " << CountLetter(S1, C);

 

    return 0;
}