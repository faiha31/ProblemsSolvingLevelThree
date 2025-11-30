#include <iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

/*Write a program to fill two 3x3 matrix with random numbers and them, 
then write a function to sum all numbers in this matrix and print it.*/

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
int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3] = {};


    FillMatrixWithRandomNumbers(arr, 3, 3);
    cout << "Matrix 1 : " << endl;
    PrintMatrix(arr, 3, 3);

    cout << "\nSum of Matrix1 is : " << SumNumbersOfMatrix(arr, 3, 3) << endl;

    system("pause>0");

}