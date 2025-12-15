#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*Write a program to read bank client data record and convert it to one line:*/

struct stClient
{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
};
stClient ReadNewClient()
{
    stClient Client;

    cout << "Enter Account Number ? ";
    getline(cin, Client.AccountNumber);

    cout << "Enter PinCode ? ";
    getline(cin, Client.PinCode);

    cout << "Enter Name ? ";
    getline(cin, Client.Name);

    cout << "Enter Phone ? ";
    getline(cin, Client.Phone);

    cout << "Enter AccountBalance ? ";
    cin >> Client.AccountBalance;

    return Client;
}
string ConvertRecordToLine(stClient Client, string Seperator = "#//#")
{
    string StClientRecord = "";
    StClientRecord += Client.AccountNumber + Seperator;
    StClientRecord += Client.PinCode + Seperator;
    StClientRecord += Client.Name + Seperator;
    StClientRecord += Client.Phone + Seperator;
    StClientRecord += to_string(Client.AccountBalance);

    return StClientRecord;

}

int main()
{
    cout << "Please Enter Client Data : \n\n";

    stClient Client;

    Client=ReadNewClient();

    cout << "Client Record for saving is :\n" << ConvertRecordToLine(Client);

    system("pause>0");

    return 0;
}