#include <iostream>
#include <string>
#include <cctype>
using namespace std;

/*Write a program to read a string then 
print all vowels in that string (Vowels are: a, e, i, o, u)*/

string ReadString()
{
    string S;
    cout << "Please enter your string ?\n";
    getline(cin, S);
    return S;
}
bool IsVowels(char Letter)
{
    Letter = tolower(Letter);

    return ((Letter == 'a') || (Letter == 'e') ||
        (Letter == 'i') || (Letter == 'o') || (Letter == 'u'));

}
void PrintVowelsLetter(string S)
{
    cout << "\nVowels in string are : ";

    for (int i = 0; i < S.length(); i++)
    {
        if (IsVowels((S[i])))
            cout<<S[i]<<"   ";
    }

}
int main()
{
    string S = ReadString();

    PrintVowelsLetter(S);





    return 0;
}