#include <iostream>
#include <string>
#include <vector>
#include<fstream>
using namespace std;

/*Write a program to ask you to enter clients and save them to file:*/

const string ClientsFileName = "Clients.txt";

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
    getline(cin>>ws, Client.AccountNumber);

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
void AddDataLineToFile(string FileName,string stDataLine)
{
    fstream MyFile;
    MyFile.open(FileName, ios::out | ios::app);

    if (MyFile.is_open())
    {
        MyFile << stDataLine << endl;

        MyFile.close();
    }

}
void AddNewClient()
{
    stClient Client;
    Client= ReadNewClient();
    AddDataLineToFile(ClientsFileName, ConvertRecordToLine(Client));
    
}
void AddClients()
{
    char AddMore = 'Y';

    do
    {
        system("cls");
        cout << "Adding New Client : \n\n";

        AddNewClient();
        cout << "Client Adeed Successfuly , do you want to add more clients? ";
        cin >> AddMore;

    } while (toupper(AddMore)=='Y');
}
int main()
{

    AddClients();

    system("pause>0");

    return 0;
}