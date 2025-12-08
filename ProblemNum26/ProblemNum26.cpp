#include <iostream>
#include <string>
#include <cctype>
using namespace std;

/*Write a program to read a string then upper all letters,
then lower all letters, and print them.*/

string ReadString()
{
    string S;
    cout << "Please enter your string ?\n";
    getline(cin, S);
    return S;
}
string UpperAllString(string S)
{

    for (int i = 0; i < S.length(); i++)
    {
         S[i] = toupper(S[i]);

    }
    return S;
}
string LowerAllString(string S)
{

    for (int i = 0; i < S.length(); i++)
    {

        S[i] = tolower(S[i]);

    }
    return S;
}
int main()
{
    string S1 = ReadString();

    cout << "\nString after Upper : \n";
    S1 = UpperAllString(S1);
    cout << S1 << endl;

    cout << "\nString after Lower : \n";
    S1 = LowerAllString(S1);
    cout << S1 << endl;


    return 0;
}