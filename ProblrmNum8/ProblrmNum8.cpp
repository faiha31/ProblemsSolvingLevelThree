#include <iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

/*Write a program to fill two 3x3 matrix with random numbers and them, 
then multiply them into a 3rd matrix and print it.*/

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
void multiplyMatrix(int arr1[3][3], int arr2[3][3], int arrMultiplyed[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arrMultiplyed[i][j] = arr1[i][j] * arr2[i][j];
        }

    }

}
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            printf( "%0*d   " , 2 , arr[i][j]);
        }
        cout << endl;

    }
}
int main()
{
    srand((unsigned)time(NULL));

    int arr1[3][3] = {};
    int arr2[3][3] = {};
    int arrMultiplyed[3][3] = {};

    FillMatrixWithRandomNumbers(arr1, 3, 3);
    cout << "Matrix 1 : " << endl;
    PrintMatrix(arr1, 3, 3);

    FillMatrixWithRandomNumbers(arr2, 3, 3);
    cout << "\nMatrix 2 : " << endl;
    PrintMatrix(arr2, 3, 3);

    multiplyMatrix(arr1,arr2, arrMultiplyed,3,3);
    cout << "\nResults  : " << endl;
    PrintMatrix(arrMultiplyed, 3, 3);

}