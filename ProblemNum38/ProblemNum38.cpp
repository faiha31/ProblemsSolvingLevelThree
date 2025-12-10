#include <iostream>
#include <string>
 using namespace std;

/*Write a program to read a string then Trim Left, Right, All*/

string ReadString()
{
    string S;
    cout << "Please enter your string ?\n";
    getline(cin, S);
    return S;
}
string TrimLeft(string S)
{
    for (short i = 0; i < S.length(); i++)
    {
        if (S[i] != ' ')
            return S.substr(i, S.length() - i);
    }
    return "";
}
string TrimRight(string S)
{
    for (short i = S.length(); i >=0 ; i--)
    {
        if (S[i] != ' ')
            return S.substr(0, i + 1);
    }
    return "";
}
string Trim(string S)
{
    return(TrimLeft(TrimRight(S)));
}

int main()
{
    string S = "           Faihaa Al-hadeedi           ";

    cout << "Trim Left : " << TrimLeft(S);
    cout << "\nTrim Right : " << TrimRight(S);
    cout << "\nTrim  : " << Trim(S);


    return 0;
}