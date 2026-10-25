#include "MatrixSolution.h"

void MatrixSolution::setMatrix(){
    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    cout << "Enter matrix elements:\n";

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }
}

void MatrixSolution::rotate(){
    if (rows != cols) {
        cout << "Rotation requires a square matrix.\n";
        return;
    }

    // Step 1: Transpose the matrix (swap across diagonal)
    // j starts from i + 1 to avoid swapping elements twice
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < rows; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }

    // Step 2: Reverse each row to complete 90-degree clockwise rotation
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols / 2; j++) {
            swap(arr[i][j], arr[i][cols - 1 - j]);
        }
    }
}

void MatrixSolution::printMatrix() {
     for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }
}

