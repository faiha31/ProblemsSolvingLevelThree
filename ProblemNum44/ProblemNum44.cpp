#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*Write a program to remove all punctuations from a string:*/

string RemovePunctuationsInString(string S)
{
    string result;

    for (int i = 0; i < S.length(); i++)
    {
        if (!ispunct (S[i]))
            result += S[i];
    }

    return result;
}


int main()
{
    string S = "Welcom to Jordan , Jordan is a nice country ; it's amazing.";

    cout << "Original String : \n" << S;
    cout << "\n\nPunctuations Removed : \n" << RemovePunctuationsInString(S);
  

    return 0;
}