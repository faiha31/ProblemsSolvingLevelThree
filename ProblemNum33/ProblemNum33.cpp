#include <iostream>
#include <string>
#include <cctype>
using namespace std;

/*Write a program to read a string then
count all vowels in that string (Vowels are: a, e, i, o, u)*/

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
short CountVowelsLetter(string S)
{
    short Counter = 0;

    for (int i = 0; i < S.length(); i++)
    {
       if(IsVowels((S[i])))
           Counter++;
    }

    return  Counter;
}
int main()
{
    string S = ReadString();

    cout << "\nNumber of vowels is : " << CountVowelsLetter(S);
   




    return 0;
}