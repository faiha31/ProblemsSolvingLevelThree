#include <iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

/*Write a program to compare two matrices and check if they are equal or not.*/

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
int SumNumbersOfMatrix(int arr[3][3], short Rows, short Cols)
{
    int Sum = 0;

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            Sum += arr[i][j];
        }

    }

    return Sum;
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
bool AreEqualMatrices(int arr[3][3], int arr1[3][3], short Rows, short Cols)
{
    return (SumNumbersOfMatrix(arr, Rows, Cols) == SumNumbersOfMatrix(arr1, Rows, Cols));
}
int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3] = {};
    int arr1[3][3] = {};


    FillMatrixWithRandomNumbers(arr, 3, 3);
    cout << "Matrix 1 : " << endl;
    PrintMatrix(arr, 3, 3);

    FillMatrixWithRandomNumbers(arr1, 3, 3);
    cout << "\nMatrix 2 : " << endl;
    PrintMatrix(arr1, 3, 3);

    if (AreEqualMatrices(arr,arr1, 3, 3))
        cout << "\nmYes : matrices are equal . " << endl;
    else
        cout << "\nNo : matrices are Not equal . " << endl;


    system("pause>0");

}