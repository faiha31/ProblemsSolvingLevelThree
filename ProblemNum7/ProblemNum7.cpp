#include <iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

/*Write a program to fill a 3x3 matrix with ordered numbers and print it, 
then transpose matrix and print it.*/

void FillMatrixWithOrderdNumbers(int arr[3][3], short Rows, short Cols)
{
    short Counter = 1;

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arr[i][j] = Counter;

            Counter++;
        }

    }
}
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;

    }
}
void TransposeMatrix(int arr[3][3], int arrTransposed[3][3],short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arrTransposed[i][j]= arr[j][i];
        }

    }
 
}
int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3] = {};
    int arrTransposed[3][3] = {};

    FillMatrixWithOrderdNumbers(arr, 3, 3);

    cout << "The following is a 3x3 orderd matrix : " << endl;
    PrintMatrix(arr, 3, 3);

    TransposeMatrix(arr, arrTransposed, 3, 3);

    cout << "\n\nThe following is a 3x3 transpose matrix : " << endl;
    PrintMatrix(arrTransposed, 3, 3);
}