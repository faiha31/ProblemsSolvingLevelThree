#include <iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

/*Write a program to compare two matrices and check Ttypical matrices if they are equal or not.*/

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
bool AreTypicalMatrices(int arr[3][3], int arr1[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (arr[i][j] != arr1[i][j])
                return false;
        }
    }

    return true;
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

    if (AreTypicalMatrices(arr, arr1, 3, 3))
        cout << "\nYes : both matrices are typical . " << endl;
    else
        cout << "\nNo : both matrices are Not typical . " << endl;


    system("pause>0");

}