#include <iostream>
#include <string>
#include <cctype>
using namespace std;

/*Write a program to read a string then count small/capital letters in that string.*/

enum enWhatToCount {SmallLetters=0 , CapitalLetters=1 , AllLetters=2};

string ReadString()
{
    string S;
    cout << "Please enter your string ?\n";
    getline(cin, S);
    return S;
}
short CountLetters(string S, enWhatToCount WhatToCount=enWhatToCount::AllLetters) // Generic Count 
{

    if (WhatToCount == enWhatToCount::AllLetters)
    {
        return S.length();
    }

    short Counter = 0;
  

    for (int i = 0; i < S.length(); i++)
    {
        if (WhatToCount == enWhatToCount::SmallLetters && islower(S[i]))
            Counter++;

        if (WhatToCount == enWhatToCount::CapitalLetters && isupper(S[i]))
            Counter++;
    }

    return  Counter;
}
short CountSmalllLetter(string S)
{
    short CountSmallLNum = 0;

    for (int i = 0; i < S.length(); i++)
    {
        if (islower(S[i]))
            CountSmallLNum++;
    }
   
    return  CountSmallLNum;
}
short CountCapitalLetter(string S)
{
    short CountCapitalNum = 0;

    for (int i = 0; i < S.length(); i++)
    {
        if (isupper(S[i]))
            CountCapitalNum++;
    }
    
    return  CountCapitalNum;
}

int main()
{
    string S1 = ReadString();

    cout << "\nString Length = " << CountLetters(S1) << endl;
    cout << "Capital Letters Count = " << CountLetters(S1,enWhatToCount::CapitalLetters) << endl;
    cout << "Small Letters Count = " << CountLetters(S1, enWhatToCount::SmallLetters) << endl;

    cout << "\n\nMethod 2 : \n\n";

    cout << "\nString Length = " << S1.length() << endl;
    cout << "Capital Letters Count = " << CountCapitalLetter(S1) << endl;
    cout << "Small Letters Count = " << CountSmalllLetter(S1) << endl;

    return 0;
}