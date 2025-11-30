#include <iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

/*Write a program to fill a 3x3 matrix with ordered numbers.*/

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
int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3] = {};

    FillMatrixWithOrderdNumbers(arr, 3, 3);

    cout << "The following is a 3x3 random matrix : " << endl;
    PrintMatrix(arr, 3, 3);


}