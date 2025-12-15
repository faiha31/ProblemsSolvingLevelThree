#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*Write a program to convert line data to record and print it:*/

struct stClient
{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
};
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
stClient ConvertLineToRecord(string StLine, string Seperator = "#//#")
{
    stClient Client;
    vector <string> vClientData = SplitString(StLine, Seperator);

    Client.AccountNumber = vClientData[0];
    Client.PinCode = vClientData[1];
    Client.Name = vClientData[2];
    Client.Phone = vClientData[3];
    Client.AccountBalance = stod(vClientData[4]);

    return Client;

}
void PrintClientRecord(stClient Client)
{
    cout << "\n\nThe following is the extracted client record : \n";
    cout << "\nAccount Number : " << Client.AccountNumber;
    cout << "\nPinCode : " << Client.PinCode;
    cout << "\nName : " << Client.Name;
    cout << "\nPhone : " << Client.Phone;
    cout << "\nAccountBalance : " << Client.AccountBalance;

}
int main()
{
    string stLine = "A150#//#1234#//#Faihaa Alhadeedi#//#0786544444#//#5000,000";
    cout << "\nLine Record is :\n";
    cout << stLine << endl;
    stClient Client;

    Client = ConvertLineToRecord(stLine);

    PrintClientRecord(Client);

    system("pause>0");

    return 0;
}