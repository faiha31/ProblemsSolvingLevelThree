#include <iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

/*Write a program to count given number in matrix.*/

int RandomNumber(int From, int To)
{
    int RandNum = rand() % (To - From + 1) + From;

    return RandNum;
}
void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arr[i][j] = RandomNumber(1, 10);
        }

    }
}
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
short CountNumberinMatrix(int arr[3][3],int Number, short Rows, short Cols)
{
    short Count = 0;

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (arr[i][j] == Number)
                Count++;
        }
    }
    return Count;
}
int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3] = {};

    FillMatrixWithRandomNumbers(arr, 3, 3);
    cout << "Matrix 1 : " << endl;
    PrintMatrix(arr, 3, 3);

    int Number;

    cout << "\nEnter the number to count in matrix ? ";
    cin >> Number;

    cout << "\nNumber " << Number << " count in matrix is "
        << CountNumberinMatrix(arr, Number, 3, 3) << endl;;



    system("pause>0");

}