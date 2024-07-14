/*
4.1: Write a class and required function to read a matrix of
size m*n from the keyboard with the help of constructor.
*/

#include <iostream>
using namespace std;
class Matrix
{
private:
    int row;
    int colunm;

public:
    Matrix() : row(0), colunm(0) {}
    Matrix(int m, int n) : row(m), colunm(n) {}
    void setMatrix();
};
void Matrix ::setMatrix()
{
    int matrix[row][colunm];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colunm; j++)
        {
            cout << "Enter element for position (" << i + 1 << "," << j + 1 << ") : ";
            cin >> matrix[i][j];
        }
    }
}
int main()
{
    cout << "Name: Md Shahajalal Mahmud" << endl
         << "ID: 1539" << endl;

    int row, colunm;
    cout << "Enter value for a matrix row and colunm(m, n): ";
    cin >> row >> colunm;

    Matrix M1(row, colunm);
    M1.setMatrix();
    
    return 0;
}