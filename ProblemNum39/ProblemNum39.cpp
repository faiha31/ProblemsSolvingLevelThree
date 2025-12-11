#include <iostream>
#include <string>
#include<vector>
using namespace std;

/*Write a program to join vector of strings into a one string with separators*/

string JoinString(vector <string> vString, string Delim)
{
    string S1="";

    for (string& s : vString)
    {
        S1 = S1 + s + Delim;
    }
    return S1.substr(0, S1.length() - Delim.length());
}
int main()
{
    vector <string> vString = {"Faihaa", "Farah", "Marah" ,"Dana"};

    cout << "Vector after join :\n" << JoinString(vString, " ") << endl;


    return 0;
}