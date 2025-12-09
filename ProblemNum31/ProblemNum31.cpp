#include <iostream>
#include <string>
#include <cctype>
using namespace std;

/*Write a program to read a string and read a character
then count the character in that string(Match Case Or Not)*/

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
    cin >> c;
    return c;
}
char InvertLetterCase (char char1)
{
    return isupper(char1) ? tolower(char1) : toupper(char1);
}
short CountLetter(string S, char Letter,bool MatchCase=true)
{
    short Counter = 0;

    for (int i = 0; i < S.length(); i++)
    {
        if (MatchCase)
        {
            if (S[i] == Letter)
                Counter++;
        }

        else
        {
            if (tolower(S[i]) == tolower(Letter))
                Counter++;
        }
    }

    return  Counter;
}
int main()
{
    string S1 = ReadString();
    char C = ReadCharacter();

    cout << "\nLetter " << "\'" << C << "\'" << " Count = " << CountLetter(S1, C);
    cout << "\n\nLetter " << "\'" << C << "\'" <<" or "<<"\'"<< InvertLetterCase(C)
        <<"\'" << " Count = " << CountLetter(S1, C,0)<<endl;



    return 0;
}