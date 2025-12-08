#include <iostream>
#include <string>
#include <cctype>
using namespace std;

/*Write a program to read a string then
lowercase the first letter of each word in that string.*/

string ReadString()
{
    string S;
    cout << "Please enter your string ?\n";
    getline(cin, S);
    return S;
}
string LowerFirstLetterOfEachWord(string S)
{
    bool IsFirstLetter = true;

    for (int i = 0; i < S.length(); i++)
    {
        if (S[i] != ' ' && IsFirstLetter)
        {
            S[i] = tolower(S[i]);
        }
        IsFirstLetter = S[i] == ' ' ? true : false;

    }
    return S;
}
int main()
{
    string S1 = ReadString();

    cout << "String after conversion : \n";
    S1 = LowerFirstLetterOfEachWord(S1);
    cout << S1;


    return 0;
}