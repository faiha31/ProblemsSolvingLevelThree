#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*Write a program to read string and reverse its words.*/

string ReadString()
{
    string S;
    cout << "Please enter your string ?\n";
    getline(cin, S);
    return S;
}
vector < string>  SplitString(string S, string Delim)
{
    vector <string> vString;

    short pos = 0;//position
    string sWord;

    while ((pos = S.find(Delim)) != std::string::npos)
    {
        sWord = S.substr(0, pos);
        if (sWord != "")
            vString.push_back(sWord);

        S.erase(0, pos + Delim.length());
    }

    if (S != "")
        vString.push_back(S);

    return vString;
}
string ReverseWordInString(string S)
{
    vector <string> vString;
    string S1="";

    vString = SplitString(S, " ");

    vector <string>::iterator iter = vString.end();

    while (iter != vString.begin())
    {
        --iter;
        S1 += *iter + " ";
    }

    return S1.substr(0, S1.length() - 1);

}

int main()
{
    string S = ReadString();
    cout << "\n\nString after reversing words :\n";
    cout<<ReverseWordInString(S);

    return 0;
}