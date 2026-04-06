#include <iostream>
#include <iomanip>
using namespace std;

int RandomNumber(int From, int To)
{
    //Function to generate a random number
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillMatrixWithRandomNumbers(int Matrix[3][3], short Rows, short Columns)
{
    for (short i = 0; i < Rows; i++) 
        for (short j = 0; j < Columns; j++) 
            Matrix[i][j] = RandomNumber(1, 100);
    }

void PrintMatrix(int Matrix[3][3], short Rows, short Columns)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Columns; j++)
        {
            cout <<setw(3) << Matrix[i][j] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    //Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));
    int Matrix[3][3];
    FillMatrixWithRandomNumbers(Matrix, 3, 3);
    cout << "\n The following is a 3x3 random matrix:\n";
    PrintMatrix(Matrix, 3, 3);
    system("pause>0");
}
