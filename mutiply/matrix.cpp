#include <iostream>
using namespace std;
#define N 10

void multiply(int a[][N], int b[][N], int f[][N], int r1, int c1, int c2)
{
     for (int row = 0; row < r1; row++) {  
           for (int col = 0; col < c2; col++) {  
               // Multiply the row of A by the column of B to get the row, column of product.  
               for (int inner = 0; inner < c1; inner++) {  
                   f[row][col] += a[row][inner] * b[inner][col];  
               }  
               std::cout << f[row][col] << "  ";  
           }  
           std::cout << "\n";  
       }  

}

