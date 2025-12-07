#include <iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

/*Write a program to print the intersected numbers in two given matrices.*/

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
bool IsNumberinMatrix(int arr[3][3], int Number, short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (arr[i][j] == Number)
                return true;
        }
    }
    return false;
}
void PrintIntersectedInMatrices(int Matrix1[3][3],int Matrix2[3][3], short Rows, short Cols)
{
    int Number;

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            Number = Matrix1[i][j];

            if (IsNumberinMatrix(Matrix2, Number, Rows, Cols))
                cout << setw(3) << Number<<"\t";
            
        }
    }
   
}
int main()
{
    srand((unsigned)time(NULL));

    int Matrix1[3][3] = { {30,77,12},{7,100,1},{5,0,9} };
    int Matrix2[3][3] = { {77,8,12},{0,5,3},{89,8,100} };

    cout << "Matrix 1 : " << endl;
    PrintMatrix(Matrix1, 3, 3);

    cout << "\nMatrix 2 : " << endl;
    PrintMatrix(Matrix2, 3, 3);

    cout << "\nIntersected Number are : \n";
    PrintIntersectedInMatrices(Matrix1, Matrix2, 3, 3);

    system("pause>0");

}