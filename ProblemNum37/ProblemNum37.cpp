#include <iostream>
#include <string>
#include<vector>
using namespace std;

/*Write a program to read a string then make a function to split each word in vector.*/

string ReadString()
{
    string S;
    cout << "Please enter your string ?\n";
    getline(cin, S);
    return S;
}
vector < string>  SplitString(string S,string Delim)
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
        vString.push_back(sWord);

    return vString;
}
int main()
{
    vector <string> vString;
    string S1="Faihaa#,,#Farah#,,#Israa#,,#Dana";

    vString = SplitString(ReadString(), " ");
    //vString = SplitEachWordInString(S1, "#,,#");

    cout << "Tokens = " << vString.size() << endl;

    for (string &i : vString)
    {
        cout << i << endl;
    }
  

    return 0;
}