#include <iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

/*Write a program to check if the matrix is Scalar or not.*/

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
bool IsScalarMatrix(int arr[3][3], short Rows, short Cols)
{
    int FirstDiagonalElement = arr[0][0];

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if ((i == j) && (arr[i][j] != FirstDiagonalElement))
            {
                return false;
            }

            if ((i != j) && (arr[i][j] != 0))
            {
                return false;
            }

        }
    }

    return true;
}
int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3] = { {9,0,0},{0,9,0},{0,0,9} };
    //int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };

    cout << "Matrix 1 : " << endl;
    PrintMatrix(arr, 3, 3);

    if (IsScalarMatrix(arr, 3, 3))
        cout << "\nYes : Matrix is scalar . " << endl;
    else
        cout << "\nNo :  Matrix is Not scalar . " << endl;


    system("pause>0");

}