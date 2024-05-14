#include <iostream>
using namespace std;

void penjumlahan(int matriksA[2][2], int matriksB[2][2]) {
    int hasil[2][2];
    cout << "\nHasil penjumlahannya adalah" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            hasil[i][j] = matriksA[i][j] + matriksB[i][j];
            cout << hasil[i][j] << " ";
            if(j == 0) {
                cout << "| ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

void pengurangan(int matriksA[2][2], int matriksB[2][2]) {
    int hasil[2][2];
    cout << "\nHasil pengurangannya adalah" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            hasil[i][j] = matriksA[i][j] - matriksB[i][j];
            cout << hasil[i][j] << " ";
            if(j == 0) {
                cout << "| ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

void perkalian(int matriksA[2][2], int matriksB[2][2]) {
    int hasil[2][2];
    cout << "\nHasil perkaliannya adalah" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            hasil[i][j] = 0;
            for(int k = 0; k < 2; k++) {
                hasil[i][j] += matriksA[i][k] * matriksB[k][j];
            }
            cout << hasil[i][j] << " ";
            if(j == 0) {
                cout << "| ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    int matriksA[2][2];
    int matriksB[2][2];
    int pil;
    system ("cls");
    cout << "--------| Pilih Hitungan |--------\n";
    cout << "1. Penjumlahan (+)\n";
    cout << "2. Pengurangan (-)\n";
    cout << "3. Perkalian   (*)\n";
    cin >> pil;
    
    cout << "\n---------| MATRIKS A |---------" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << "masukkan baris ke-" << i << " dan kolom-" << j << ": ";
            cin >> matriksA[i][j];
        }
    }
    
    cout << "\n---------| MATRIKS B |---------" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << "masukkan baris ke-" << i << " dan kolom-" << j << ": ";
            cin >> matriksB[i][j];
        }
    }
    
    switch(pil) {
        case 1:
            penjumlahan(matriksA, matriksB);
            break;
        case 2:
            pengurangan(matriksA, matriksB);
            break;
        case 3:
            perkalian(matriksA, matriksB);
            break;
        default:
            cout << "Pilihan tidak valid" << endl;
    }
    
    return 0;
}
