
#include <iostream>
#include <cctype>
using namespace std;

/*Write a program to read a character then invert it's case and print it.*/

char ReadChar()
{
    char c;
    cout << "Please enter a character ? \n";
    cin >> c;

    return c;

}
char InvertLetterCase(char ch)
{
    return isupper(ch) ? tolower(ch) : toupper(ch);
}
int main()
{
    char c = ReadChar();
    cout << "Char after inverting case : " << endl;
    cout << InvertLetterCase(c) << endl;;
}

