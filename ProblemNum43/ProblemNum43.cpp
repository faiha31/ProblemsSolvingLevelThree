#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*Write a program to replace words in string:*/
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
string LowerAllString(string S)
{

    for (int i = 0; i < S.length(); i++)
    {

        S[i] = tolower(S[i]);

    }
    return S;
}
string JoinString(vector <string> vString, string Delim)
{
    string S1 = "";

    for (string& s : vString)
    {
        S1 = S1 + s + Delim;
    }
    return S1.substr(0, S1.length() - Delim.length());
}
string ReplaceWordInStringUsingSplit(string S, string StringToReplace,
    string ReplaceTo, bool MatchCase = true)
{
    vector <string> vString=SplitString(S, " ");


    for (string& s : vString)
    {
        if (MatchCase)
        {
            if (s == StringToReplace)
                s = ReplaceTo;
        }
        else 
            if (LowerAllString(s) == LowerAllString(StringToReplace))
            s = ReplaceTo;

    }

    return JoinString(vString, " ");

}


int main()
{
    string S = "Welcom to Jordan , Jordan is a nice country";
    string StringToReplace = "jordan";
    string sReplaceTo = "USA";

    cout << "Original String : \n" << S;

    cout << "\n\nReplace with match case : \n" 
        << ReplaceWordInStringUsingSplit(S, StringToReplace, sReplaceTo);

    cout << "\n\nReplace with dont match case : \n"
        << ReplaceWordInStringUsingSplit(S, StringToReplace, sReplaceTo,false);

    return 0;
}