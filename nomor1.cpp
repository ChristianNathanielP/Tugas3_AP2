#include <iostream>

using namespace std;

int main() {
    int matriksA[2][2], matriksB[2][2], hasil[2][2];

    // Input matriks A
    cout << "Masukkan nilai untuk matriks A (2x2):\n";
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << "Elemen [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriksA[i][j];
        }
    }

    // Input matriks B
    cout << "Masukkan nilai untuk matriks B (2x2):\n";
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << "Elemen [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriksB[i][j];
        }
    }

    // Penjumlahan matriks
    cout << "\nHasil penjumlahan matriks A dan B:\n";
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            hasil[i][j] = matriksA[i][j] + matriksB[i][j];
            cout << hasil[i][j] << " ";
        }
        cout << endl;
    }

    // Pengurangan matriks
    cout << "\nHasil pengurangan matriks A dan B:\n";
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            hasil[i][j] = matriksA[i][j] - matriksB[i][j];
            cout << hasil[i][j] << " ";
        }
        cout << endl;
    }

    // Perkalian matriks
    cout << "\nHasil perkalian matriks A dan B:\n";
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            hasil[i][j] = 0;
            for (int k = 0; k < 2; ++k) {
                hasil[i][j] += matriksA[i][k] * matriksB[k][j];
            }
            cout << hasil[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
