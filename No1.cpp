#include <iostream>
using namespace std;

void inputMatrix(int matrix[2][2], const string& nama) {
    cout << "Masukkan nilai matriks " << nama << ":\n";
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << "Masukkan bilangan dalam elemen (" << i + 1 << ", " << j + 1 << ") : ";
            cin >> matrix[i][j];
        }
    }
}

void tampilkanMatrix(const int matrix[2][2], const string& nama) {
    cout << nama << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

void Penjumlahan(const int matrix1[2][2], const int matrix2[2][2], int hasil[2][2]) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            hasil[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void Pengurangan(const int matrix1[2][2], const int matrix2[2][2], int hasil[2][2]) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            hasil[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

void Perkalian(const int matrix1[2][2], const int matrix2[2][2], int hasil[2][2]) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            hasil[i][j] = 0;
            for (int k = 0; k < 2; ++k) {
                hasil[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    int matrixA[2][2], matrixB[2][2], hasiltambah[2][2], hasilkurang[2][2], hasilkali[2][2];

    system("CLS");
    inputMatrix(matrixA, "A");
    inputMatrix(matrixB, "B");

    system("CLS");
    Penjumlahan(matrixA, matrixB, hasiltambah);
    Pengurangan(matrixA, matrixB, hasilkurang);
    Perkalian(matrixA, matrixB, hasilkali);

    tampilkanMatrix(hasiltambah, "----[ Penjumlahan ]----");
    tampilkanMatrix(hasilkurang, "----[ Pengurangan ]----");
    tampilkanMatrix(hasilkali, "----[ Perkalian ]----");

    return 0;
}
