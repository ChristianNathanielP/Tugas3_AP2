#include <iostream>
using namespace std;

void hasilMatriks(int matriks[2][2]) {
    cout << "Matriks:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matriks[i][j] << " ";
        }
        cout << "\n";
    }
}

void operasiMatriks(int matriks1[2][2], int matriks2[2][2], int hasil[2][2], char operasi) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (operasi == '+') {
                hasil[i][j] = matriks1[i][j] + matriks2[i][j];
            } else if (operasi == '-') {
                hasil[i][j] = matriks1[i][j] - matriks2[i][j];
            } else if (operasi == '*') {
                hasil[i][j] = 0;
                for (int k = 0; k < 2; k++) {
                    hasil[i][j] += matriks1[i][k] * matriks2[k][j];
                }
            }
        }
    }
}

int main() {
    char ulang1,ulang2;
    do {

    int matriks1[2][2], matriks2[2][2], hasil[2][2];
    char operasi;

    cout << "Masukkan elemen matriks pertama:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Masukkan elemen baris " << i + 1 << " kolom " << j + 1 << ": ";
            cin >> matriks1[i][j];
        }
    }

    cout << "Masukkan elemen matriks kedua:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Masukkan elemen baris " << i + 1 << " kolom " << j + 1 << ": ";
            cin >> matriks2[i][j];
        }
    }

    do  {

    cout << "Apakah Anda ingin melakukan penjumlahan, pengurangan, atau perkalian? (+/-/*): ";
    cin >> operasi;

    operasiMatriks(matriks1, matriks2, hasil, operasi);
    cout << "\nHasil " << (operasi == '+' ? "Penjumlahan" : (operasi == '-' ? "Pengurangan" : "Perkalian")) << ":\n";
    hasilMatriks(hasil);

    cout << "Apakah Anda ingin mengubah operasi ? (y/n): ";
        cin >> ulang2;

    } while (ulang2 == 'y' || ulang2 == 'Y');
    

    cout << "Apakah Anda ingin melakukan operasi lain? (y/n): ";
        cin >> ulang1;

    } while (ulang1 == 'y' || ulang1 == 'Y');

    return 0;
}
