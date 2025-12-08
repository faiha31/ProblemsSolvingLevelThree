#include <iostream>
#include <string>
#include <cctype>
using namespace std;

/*Write a program to read a string then invert all its letter's case and print it.*/

string ReadString()
{
    string S;
    cout << "Please enter your string ?\n";
    getline(cin, S);
    return S;
}
char InvertLetterCase(char ch)
{
    return isupper(ch) ? tolower(ch) : toupper(ch);
}
string InvertAllStringLettersCase(string S)
{

    for (int i = 0; i < S.length(); i++)
    {

        S[i] = InvertLetterCase(S[i]);

    }
    return S;
}

int main()
{
    string S1 = ReadString();

    cout << "\nString after inverting all letters : \n";
    S1 = InvertAllStringLettersCase(S1);
    cout << S1 << endl;


    return 0;
}