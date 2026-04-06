#include <iostream>
#include <iomanip>
using namespace std;

int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

void FillMatrixWithRandomNumbers(int Matrix[3][3], short Rows, short Columns)
{
    for (short i = 0; i < Rows; i++) 
        for (short j = 0; j < Columns; j++)
            Matrix[i][j] = RandomNumber(1, 100);
}

void PrintMatrix(int Matrix[3][3], short Rows, short Columns)
{
    short MiddleRow = Rows/3 , MiddleColumn = Rows/3;
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Columns; j++) 
            cout <<setw(5) << Matrix[i][j] << " ";
        cout << "\n";
    }
}

void MultiplyTwoMatrices(int FirstMatrix[3][3], int SecondMatrix[3][3], int ResultMatrix[3][3], int Rows, int Columns)
{
    for(short i = 0; i < Rows; i++)
        for (short j = 0; j < Columns; j++) 
            ResultMatrix[i][j] = FirstMatrix[i][j] * SecondMatrix[i][j];
}

int main()
{
    //Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));
    int FirstMatrix[3][3] , SecondMatrix[3][3] , ResultMatrix[3][3];

    FillMatrixWithRandomNumbers(FirstMatrix, 3, 3);
    FillMatrixWithRandomNumbers(SecondMatrix, 3, 3);

    cout <<"\nMatrix1:\n";
    PrintMatrix(FirstMatrix, 3, 3);
    cout<<endl;
    cout <<"\nMatrix2:\n";
    PrintMatrix(SecondMatrix, 3, 3);

    MultiplyTwoMatrices(FirstMatrix, SecondMatrix, ResultMatrix, 3, 3);

    cout <<"\nResults:\n";
    PrintMatrix(ResultMatrix, 3, 3);
}
