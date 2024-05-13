#include <iostream>
using namespace std;

// Fungsi untuk menampilkan matriks
void displayMatrix(int matrix[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// Fungsi untuk penjumlahan matriks
void addMatrix(int matrix1[2][2], int matrix2[2][2]) {
    int result[2][2];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    cout << "Hasil penjumlahan matriks:" << endl;
    displayMatrix(result);
}

// Fungsi untuk pengurangan matriks
void subtractMatrix(int matrix1[2][2], int matrix2[2][2]) {
    int result[2][2];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
    cout << "Hasil pengurangan matriks:" << endl;
    displayMatrix(result);
}

// Fungsi untuk perkalian matriks
void multiplyMatrix(int matrix1[2][2], int matrix2[2][2]) {
    int result[2][2];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    cout << "Hasil perkalian matriks:" << endl;
    displayMatrix(result);
}

int main() {
    int matrix1[2][2], matrix2[2][2];

    // Input nilai matriks pertama
    cout << "Masukkan elemen matriks pertama:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> matrix1[i][j];
        }
    }

    // Input nilai matriks kedua
    cout << "Masukkan elemen matriks kedua:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> matrix2[i][j];
        }
    }

    addMatrix(matrix1, matrix2);
    subtractMatrix(matrix1, matrix2);
    multiplyMatrix(matrix1, matrix2);

    return 0;
}
