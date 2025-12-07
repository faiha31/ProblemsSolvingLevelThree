#include <iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

/*Write a program to check if the matrix is Palindrome or not.*/

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
bool IsPalindromeMatrix(int arr[3][3], short Rows, short Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols/2; j++)
        {
            if (arr[i][j] != arr[i][Cols - 1- j]);
            return false;
        }
    }
    return true;
}

int main()
{
    srand((unsigned)time(NULL));

    int Matrix1[3][3] = { {1,2,1},{5,5,5},{7,3,7} };

    cout << "Matrix 1 : " << endl;
    PrintMatrix(Matrix1, 3, 3);

    if (IsPalindromeMatrix(Matrix1, 3, 3))
        cout << "\nYes : Matrix is Palindrome " << endl;
    else
        cout << "\nNo : Matrix is Not Palindrome " << endl;


    system("pause>0");

}