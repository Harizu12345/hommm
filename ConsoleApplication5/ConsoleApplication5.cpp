#include <iostream>


using namespace std;



const int MAX_SIZE = 100;

void initializeMatrix(int matrix[MAX_SIZE][MAX_SIZE], int size) {
    cout << "enter element " << size << " x " << size << ": ";
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cin >> matrix[i][j];
        }
    }
}

void displayMatrix(int matrix[MAX_SIZE][MAX_SIZE], int size) {
    cout << "matrisa " << size << " x " << size << ": ";
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void findMinMaxDiagonal(int matrix[MAX_SIZE][MAX_SIZE], int size) {
    int maxElement = matrix[0][0];
    int minElement = matrix[0][0];

    for (int i = 0; i < size; ++i) {
        if (matrix[i][i] > maxElement) {
            maxElement = matrix[i][i];
        }
        if (matrix[i][i] < minElement) {
            minElement = matrix[i][i];
        }
    }

    cout << "max: " << maxElement << endl;
    cout << "min: " << minElement << endl;
}

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int size;

    cout << "enter size kvadratnoy matricy: ";
    cin >> size;

    initializeMatrix(matrix, size);
    displayMatrix(matrix, size);
    findMinMaxDiagonal(matrix, size);

    return 0;
}
