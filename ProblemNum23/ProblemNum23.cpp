#include <iostream>
#include <string>
using namespace std;

/*Write a program to read a string then print the first letter of each word in that string.*/

string ReadString()
{
    string S;
    cout << "Please enter your string ?\n";
    getline(cin, S);
    return S;
}
void PrintFirstLetterOfEachWord(string S)
{
    bool IsFirstLetter = true;

    cout << "First letters of this string : \n";

    for (int i = 0; i < S.length(); i++)
    {
        if ( S[i] != ' ' && IsFirstLetter)
        {
            cout << S[i] << endl;
        }

        IsFirstLetter = S[i] == ' ' ? true : false;

    }
}
int main()
{
    
    PrintFirstLetterOfEachWord(ReadString());

    return 0;
}

