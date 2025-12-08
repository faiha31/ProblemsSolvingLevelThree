
#include <iostream>
using namespace std;

/*Write a program to print Fibonacci Series of 10.*/

void PrintFibonacciSeriesUsingLoop(short Number)
{
    int Prev1 = 1;
    int Prev2 = 0;
    int FebNumber = 0;

    cout << "1   " ;

    for (int i = 2; i <= Number; i++)
    {
            FebNumber = Prev1 + Prev2;
            cout<< FebNumber<<"   ";
            Prev2 = Prev1;
            Prev1 = FebNumber;

        
    }
}
int main()
{
    PrintFibonacciSeriesUsingLoop(10);
}

