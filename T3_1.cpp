#include <iostream>
using namespace std;

void inputMatriks(int matriks[2][2]) {
    cout << "Masukkan nilai matriks 2x2:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << "Masukkan nilai baris " << i+1 << " kolom " << j+1 << ": ";
            cin >> matriks[i][j];
        }
    }
}

void tampilkan(int matriks[2][2]) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }
}

void penjumlahan(int matriks1[2][2], int matriks2[2][2], int hasil[2][2]) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            hasil[i][j] = matriks1[i][j] + matriks2[i][j];
        }
    }
}

void pengurangan(int matriks1[2][2], int matriks2[2][2], int hasil[2][2]) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            hasil[i][j] = matriks1[i][j] - matriks2[i][j];
        }
    }
}

void perkalian(int matriks1[2][2], int matriks2[2][2], int hasil[2][2]) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            hasil[i][j] = 0;
            for (int k = 0; k < 2; ++k) {
                hasil[i][j] += matriks1[i][k] * matriks2[k][j];
            }
        }
    }
}

int main() {
    system("cls");
    int matriks1[2][2], matriks2[2][2], hasil[2][2];
    
    inputMatriks(matriks1);
    cout << endl;
    inputMatriks(matriks2);
    
    penjumlahan(matriks1, matriks2, hasil);
    cout << endl;
    cout << "Hasil penjumlahan matriks:" << endl;
    tampilkan(hasil);
    
    pengurangan(matriks1, matriks2, hasil);
    cout << endl;
    cout << "Hasil pengurangan matriks:" << endl;
    tampilkan(hasil);
    
    perkalian(matriks1, matriks2, hasil);
    cout << endl;
    cout << "Hasil perkalian matriks:" << endl;
    tampilkan(hasil);
    
}
