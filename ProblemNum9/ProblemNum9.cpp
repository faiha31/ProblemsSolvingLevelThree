#include <iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

/*Write a program to fill a 3x3 matrix with random numbers, 
print it, then print the middle row and middle col.*/

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
void PrintMiddleRowOfMatrix(int arr[3][3], short Rows, short Cols)
{
    short MiddleRow = Rows / 2;

    
        for (short j = 0; j < Cols; j++)
        {
            printf("%0*d   ", 2, arr[MiddleRow][j]);

        }


}
void PrintMiddleColsOfMatrix(int arr[3][3], short Rows, short Cols)
{
    short MiddleCol = Cols / 2;

    for (short i = 0; i < Rows; i++)
    {
    
         printf("%0*d   ", 2, arr[i][MiddleCol]); 

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
int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3] = {};
  

    FillMatrixWithRandomNumbers(arr, 3, 3);
    cout << "Matrix 1 : " << endl;
    PrintMatrix(arr, 3, 3);

    cout << "\nMiddle row of matrix1: " << endl;
    PrintMiddleRowOfMatrix(arr, 3, 3);

    cout << "\n\nMiddle cols of matrix1: " << endl;
    PrintMiddleColsOfMatrix(arr, 3, 3);
    cout << endl;

}