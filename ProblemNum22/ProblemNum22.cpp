
#include <iostream>
using namespace std;

/*Write a program to print Fibonacci Series of 10.*/

void PrintFibonacciSeriesRecursion(short Number,int Prev1,int Prev2)
{
    int FebNumber = 0;

    if (Number > 0)
    {
        FebNumber = Prev1 + Prev2;
        cout << FebNumber << "   ";
        Prev2 = Prev1;
        Prev1 = FebNumber;
        PrintFibonacciSeriesRecursion(Number-1,Prev1,Prev2);
    }
    

}
int main()
{
    PrintFibonacciSeriesRecursion(10,0,1);
}
