#include <iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

/*Write a program to fill a 3x3 matrix with random numbers, then print each Col sum:*/

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
int ColSum(int arr[3][3], short Rows, short ColNum)
{
    int Sum = 0;

    for (int i = 0; i < Rows; i++)
    {
        Sum += arr[i][ColNum];
    }

    return Sum;
}
void PrintEachColSum(int arr[3][3], short Rows, short Cols)
{
    cout << "\nThe following are the sum of each row in the matrix : \n";

    for (short j = 0; j < Cols; j++)
    {
        cout << "Col " << j + 1 << " Sum = " << ColSum(arr, Rows, j) << endl;

    }
}
int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3] = {};

    FillMatrixWithRandomNumbers(arr, 3, 3);

    cout << "The following is a 3x3 random matrix : " << endl;
    PrintMatrix(arr, 3, 3);

    PrintEachColSum(arr, 3, 3);


}