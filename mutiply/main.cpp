#include <iostream>
using namespace std;
#include "matrix.h"
#define M 10
#define N 10

int main()
{
    int a[M][N], b[M][N], f[M][N], r1, c1, r2, c2, i, j;

    cout << "Enter rows and columns of matrix A: ";
    cin >> r1 >> c1;

    cout << "Enter rows and columns of matrix B: ";
    cin >> r2 >> c2;

    // Number of Columns of first matrix must be equal to rows of second matrix
    while (c1!=r2)
    {
        cout << "Error! column of first matrix not equal to row of second.\n";

        cout << "Enter rows and columns for first matrix: ";
        cin >> r1 >> c1;

        cout << "Enter rows and columns for second matrix: ";
        cin >> r2 >> c2;
    }



    // Storing element of matrix entered by user in array a[][].
    cout << endl << "Enter elements of matrix A: " << endl;
    for(i = 0; i < r1; ++i)
    for(j = 0; j < c1; ++j)
    {
        cout << "Enter elements a" << i + 1 << j + 1 << ": ";
        cin >> a[i][j];
    }

    // Displaying the matrix a[][]
    cout << endl << "Entered Matrix: " << endl;
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c1; ++j)
        {
            cout << " " << a[i][j];
            if(j == c1 - 1)
                cout << endl << endl;
        }

    // Storing element of matrix entered by user in array b[][].
 
    cout << endl << "Enter elements of matrix B: " << endl;
    for(i = 0; i < r2; ++i)
    for(j = 0; j < c2; ++j)
    {
        cout << "Enter elements b" << i + 1 << j + 1 << ": ";
        cin >> b[i][j];
    }

    // Displaying the matrix b[][]
    cout << endl << "Entered Matrix: " << endl;
    for(i = 0; i < r2; ++i)
        for(j = 0; j < c2; ++j)
        {
            cout << " " << b[i][j];
            if(j == c2 - 1)
                cout << endl << endl;
        }

    multiply(a,b,f,r1,c1,c2); 

    return 0;

}

