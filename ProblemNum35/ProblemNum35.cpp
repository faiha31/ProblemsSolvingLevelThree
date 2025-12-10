<<<<<<< HEAD
#include <iostream>
#include <string>
using namespace std;

/*Write a program to read a string then print each word in that string.*/

string ReadString()
{
    string S;
    cout << "Please enter your string ?\n";
    getline(cin, S);
    return S;
}
void PrintEachWordInString(string S)
{
    string delim = " ";//delimiter

    cout << "First words of this string : \n\n";

    short pos = 0;//position
    string sWord;

    while ((pos = S.find(delim)) != std::string::npos)
    {
        sWord = S.substr(0, pos);
        if (sWord != "")
            cout << sWord << endl;

        S.erase(0, pos + delim.length());
    }

    if (S != "")
        cout << S << endl;

}
int main()
{

    PrintEachWordInString(ReadString());

    return 0;
}
=======
#include <iostream>
#include <string>
using namespace std;

/*Write a program to read a string then print each word in that string.*/

string ReadString()
{
    string S;
    cout << "Please enter your string ?\n";
    getline(cin, S);
    return S;
}
void PrintEachWordInString(string S)
{
    string delim = " ";//delimiter

    cout << "First words of this string : \n\n";

    short pos = 0;//position
    string sWord;

    while ((pos = S.find(delim)) != std::string::npos)
    {
        sWord = S.substr(0, pos);
        if (sWord != "")
            cout << sWord << endl;

        S.erase(0, pos + delim.length());
    }

    if (S != "")
        cout << S << endl;

}
int main()
{

    PrintEachWordInString(ReadString());

    return 0;
}
>>>>>>> b1fc8e70fdf975d6161ab17fd4f7fc68c6c36ce2
