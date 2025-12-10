#include <iostream>
#include <string>
using namespace std;

/*Write a program to read a string then count each word in that string.*/

string ReadString()
{
    string S;
    cout << "Please enter your string ?\n";
    getline(cin, S);
    return S;
}
short CountEachWordInString(string S)
{
    string delim = " ";//delimiter
    short pos = 0;//position
    string sWord;
    short Counter = 0;

    while ((pos = S.find(delim)) != std::string::npos)
    {
        sWord = S.substr(0, pos);
        if (sWord != "")
            Counter++;

        S.erase(0, pos + delim.length());
    }

    if (S != "")
        Counter++;

    return Counter;
}
int main()
{
    string S = ReadString();

    cout << "The number of words in your string is : " << CountEachWordInString(S);
    

    return 0;
}