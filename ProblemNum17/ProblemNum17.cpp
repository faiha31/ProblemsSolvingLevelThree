#include <iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

/*Write a program to check if a given number exists in matrix or not.*/

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            printf("%0*d   ", 2, arr[i][j]);
        }
        cout << endl;

    }
}
bool IsNumberinMatrix(int arr[3][3], int Number, short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (arr[i][j] == Number)
                return true;
        }
    }
    return false;
}
int main()
{
    srand((unsigned)time(NULL));

    //int arr[3][3] = { {0,0,12},{0,0,1},{0,0,9} };
    int arr[3][3] = { {77,8,12},{0,5,3},{89,8,100} };

    cout << "Matrix 1 : " << endl;
    PrintMatrix(arr, 3, 3);

    int Number;
    cout << "\nPlease Enter the number to look for in matrix ? ";
    cin >> Number;

    if (IsNumberinMatrix(arr, Number, 3, 3))
        cout << "\nYes it is there ." << endl;
    else
        cout << "\nNo it is Not there . " << endl;


    system("pause>0");

}