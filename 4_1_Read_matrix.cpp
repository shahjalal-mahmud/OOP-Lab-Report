/*
4.1: Write a class and required function to read a matrix of
size m*n from the keyboard with the help of constructor.
*/

#include <iostream>
using namespace std;
class Matrix
{
    int row;
    int column;
    int **matrix;

public:
    Matrix() : row(0), column(0) {}
    Matrix(int m, int n)
    {
        row = m;
        column = n;
        matrix = new int *[row];
        for (int i = 0; i < row; ++i)
        {
            matrix[i] = new int[column];
        }
    }
    ~Matrix()
    {
        for (int i = 0; i < row; ++i)
        {
            delete[] matrix[i];
        }
        delete[] matrix;
    }

    void setMatrix()
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                cout << "Enter element for position (" << i + 1 << "," << j + 1 << ") : ";
                cin >> matrix[i][j];
            }
        }
    }
};

int main()
{
    cout << "Name: Md Shahajalal Mahmud" << endl
         << "ID: 1539" << endl;
         
    int m, n;
    cout << "Enter value for a matrix row and column (m, n): ";
    cin >> m >> n;

    Matrix M1(m, n);
    M1.setMatrix();

    return 0;
}