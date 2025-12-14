#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*Write a program to replace words in string:*/

string ReplaceWordInString(string S,string StringToReplace,string sReplaceTo)
{
    short pos = S.find(StringToReplace);


    while (pos != std::string::npos)
    {
        S.replace(pos, StringToReplace.length(), sReplaceTo);
        pos = S.find(StringToReplace);
    }

    return S;

}

int main()
{
    string S = "Welcom to Jordan,Jordan is a nice country";

    cout << "Original String : \n" << S;

    string StringToReplace = "Jordan";
    string sReplaceTo = "USA";

    S = ReplaceWordInString(S, StringToReplace, sReplaceTo);
    cout << "\n\nString after replace : \n" << S;



    return 0;
}