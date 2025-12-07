#include <iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

/*Write a program to print the Minimum and Maximum Numbers in Matrix.*/

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
int MinNumberinMatrix(int arr[3][3],  short Rows, short Cols)
{
    int MinNum = arr[0][0];

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (arr[i][j] < MinNum)
                MinNum= arr[i][j];
        }
    }
    return MinNum;
}
int MaxNumberinMatrix(int arr[3][3], short Rows, short Cols)
{
    int MaxNum = arr[0][0];

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (arr[i][j] > MaxNum)
                MaxNum = arr[i][j];
        }
    }
    return MaxNum;
}
int main()
{
    srand((unsigned)time(NULL));

    int Matrix1[3][3] = { {30,77,12},{7,100,1},{5,0,9} };

    cout << "Matrix 1 : " << endl;
    PrintMatrix(Matrix1, 3, 3);


    cout << "\nMinimum Number is : "<< MinNumberinMatrix(Matrix1, 3, 3);
    cout << "\nMaximum Number is : " << MaxNumberinMatrix(Matrix1, 3, 3);

    system("pause>0");

}