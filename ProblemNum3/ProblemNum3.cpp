#include <iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

/*Write a program to fill a 3x3 matrix with random numbers, 
then sum each row in separate array and print the results:*/

int RandomNumber(int From, int To)
{
    int RandNum = rand() % (To - From + 1) + From;

    return RandNum;
}
void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            arr[i][j] = RandomNumber(1, 100);
        }

    }
}
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << setw(3) << arr[i][j] << "\t";
        }
        cout << endl;

    }
}
int RowSum(int arr[3][3], short RowNum, short Cols)
{
    int Sum = 0;

    for (int j = 0; j < Cols; j++)
    {
        Sum += arr[RowNum][j];
    }

    return Sum;
}
void SumMatrixRowsInArray(int arr[3][3], int arrSum[3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        arrSum[i] = RowSum(arr, i, Cols);
    }
   
}
void PrintRowsSumArray( int arr1[3], short Rows)
{
    cout << "\nThe following are the sum of each row in the matrix : \n";

    for (short i = 0; i < Rows; i++)
    {
        cout << "Row " << i + 1 << " Sum = " << arr1[i] << endl;

    }
}
int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3] = {};
    int arrSum[3];

    FillMatrixWithRandomNumbers(arr, 3, 3);

    cout << "The following is a 3x3 random matrix : " << endl;
    PrintMatrix(arr, 3, 3);

    SumMatrixRowsInArray(arr, arrSum, 3, 3);
    PrintRowsSumArray(arrSum, 3);


}