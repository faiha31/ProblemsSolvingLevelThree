#include <iostream>
#include <string>
#include <cctype>
using namespace std;

/*Write a program to read a character the check if it is
a vowel or not (Vowels are: a, e, i, o, u)*/

char ReadCharacter()
{
    char c;
    cout << "Please enter a character ?\n";
    cin >> c;
    return c;
}
bool IsVowels( char Letter)
{
    Letter= tolower(Letter);

    return ((Letter == 'a') || (Letter == 'e') || 
           (Letter == 'i') || (Letter == 'o') || (Letter == 'u'));

}
int main()
{
    char C = ReadCharacter();

    if (IsVowels(C))
        cout << "Yes , letter of \'" <<  C  << "\' is vowel" << endl;
    else
        cout << "No , letter of \'"  << C  << "\' isn't vowel" << endl;




    return 0;
}