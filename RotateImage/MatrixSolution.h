#include<bits/stdc++.h>
using namespace std;

// change default size of matrix
static const int sizeMatrix = 100;

class MatrixSolution{
    int rows;
    int cols;
    int arr[sizeMatrix][sizeMatrix];

public:
    void setMatrix();
    void rotate();
    void printMatrix();
    
};