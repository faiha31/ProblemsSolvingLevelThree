#include <iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

/*Write a program to check if the matrix is Sparse or not.*/

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
short CountNumberinMatrix(int arr[3][3], int Number, short Rows, short Cols)
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
bool IsSparseMatrix(int arr[3][3], short Rows, short Cols)
{
    short MatrixSize = Rows * Cols;
        
    return (CountNumberinMatrix (arr,0, Rows,Cols) >= (MatrixSize /2));
}
int main()
{
    srand((unsigned)time(NULL));

    //int arr[3][3] = { {0,0,12},{0,0,1},{0,0,9} };
    int arr[3][3] = { {0,8,12},{0,5,3},{89,8,0} };

    cout << "Matrix 1 : " << endl;
    PrintMatrix(arr, 3, 3);

    if (IsSparseMatrix(arr, 3, 3))
        cout << "\nYes : Matrix is sparse . " << endl;
    else
        cout << "\nNo :  Matrix is Not sparse . " << endl;


    system("pause>0");

}