#include <iostream>
using namespace std;
int penjumlahan(int matriksA[2][2], int matriksB[2][2]) {
    int hasil[2][2];
    cout << "Hasil penjumlahannya adalah" << endl;
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

int pengurangan(int matriksA[2][2], int matriksB[2][2]) {
    int hasil[2][2];
    cout << "Hasil pengurangannya adalah" << endl;
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

int perkalian(int matriksA[2][2], int matriksB[2][2]) {
    int hasil[2][2];
    cout << "Hasil perkaliannya adalah" << endl;
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
    char pil;
    system ("cls");
    cout << "======pilih hitungan========\n";
    cout << "1. penjumlahan (+)\n";
    cout << "2. pengurangan (-)\n";
    cout << "3. perkalian (*)\n";
    cin >> pil;
    
    cout << "=========MATRIKS A==========" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << "masukkan baris ke-" << i << " dan kolom-" << j << ":";
            cin >> matriksA[i][j];
        }
    }
    
    cout << "=========MATRIKS B==========" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << "masukkan baris ke-" << i << " dan kolom-" << j << ":";
            cin >> matriksB[i][j];
        }
    }
    
    switch(pil) {
        case '+':
            penjumlahan(matriksA, matriksB);
            break;
        case '-':
            pengurangan(matriksA, matriksB);
            break;
        case '*':
            perkalian(matriksA, matriksB);
            break;
        default:
            cout << "Pilihan tidak valid" << endl;
    }
    
    return 0;
}
