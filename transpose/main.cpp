#include <iostream>
using namespace std;
#include "transpose.h"
#define M 10
#define N 10

int main()
{
    int A[M][N], B[M][N], i, j, r, c;

    cout << "Enter rows and columns of matrix: ";
    cin >> r >> c;

    // Storing element of matrix entered by user in array a[][].
    cout << endl << "Enter elements of matrix : " << endl;
    for(i = 0; i < r; ++i)
    for(j = 0; j < c; ++j)
    {
        cout << "Enter elements a" << i + 1 << j + 1 << ": ";
        cin >> A[i][j];
    }

    // Displaying the matrix a[][]
    cout << endl << "Entered Matrix: " << endl;
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << " " << A[i][j];
            if(j == c - 1)
                cout << endl << endl;
        }

 
    transpose(A, B);
 
    cout << endl << "Transpose of Matrix: " << endl;
    for(i = 0; i < c; ++i)
        for(j = 0; j < r; ++j)
        {
            cout << " " << B[i][j];
            if(j == r - 1)
                cout << endl << endl;
	}
 
    return 0;
}
