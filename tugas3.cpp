#include <iostream>
using namespace std;
// Deklarasi variabel matriks dan variabel perulangan
int matrix1[2][2], matrix2[2][2], result[2][2];
int i,j,k;
// Deklarasi prototipe fungsi-fungsi
void inputMatrix ();
void Addition ();
void Subtraction ();
void Multiplication ();
// Program dimulai
int main() {
    // Membersihkan layar
    system("CLS");

    int choice;
    char ulang;
    // Label untuk goto
    repeat:
    // Menampilkan judul program
    cout << " # Program Operasi Matriks #" << endl;
    cout << "=============================" << endl;
    // Menampilkan menu operasi matriks
    cout << "Pilihan Operasi : " << endl;
    cout << "1. Penjumlahan " << endl;
    cout << "2. Pengurangan " << endl;
    cout << "3. Perkalian " << endl;
    cout << "Pilih nomor operasi : "; cin >> choice;
    // Switch untuk memilih operasi
    switch (choice) {
        case 1:
            inputMatrix ();
            Addition ();
            break;
        case 2:
            inputMatrix ();
            Subtraction ();
            break;
        case 3:
            inputMatrix ();
            Multiplication ();
            break;
        default :
            cout << "Pilihan Anda Tidak Valid!" << endl;
    }
    // Meminta pengguna apakah ingin mengulang program
    cout << "Apakah Anda ingin mengulang kembali? (Y/T) : "; cin >> ulang;
        if ((ulang == 'Y') || (ulang == 'y')) {
            // Membersihkan layar dan kembali ke label repeat jika pengguna ingin mengulang
            system("cls");
            goto repeat;
        }
        // Menunggu inputan sebelum menutup program
        system("pause");
    return (0);
}
// Fungsi untuk meminta pengguna memasukkan elemen matriks
void inputMatrix () {
    cout << "Silakan input elemen matriks!" << endl;
    cout << "=============================" << endl;
    cout << "Matriks A" << endl;
    // Loop untuk meminta input oleh matriks A
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++){
            cin >> matrix1[i][j];
        }
    }
    cout << "Matriks B" << endl;
    // Loop untuk meminta input elemen matriks B
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++){
            cin >> matrix2[i][j];
        }
    }
    cout << "=============================" << endl;
}
// Fungsi untuk melakukan penjumlahan elemen matriks
void Addition () {
    cout << "Hasil Penjumlahan Matriks : " << endl;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++){
            result[i][j] = matrix1[i][j] + matrix2[i][j];
            cout << result[i][j] << "\t";
        }
        // Pindah ke baris baru setelah satu baris matriks selesai ditampilkan
        puts("");
    }
}
// Fungsi untuk melakukan pengurangan elemen matriks
void Subtraction () {
    cout << "Hasil Pengurangan Matriks : " << endl;
    // Loop untuk pengurangan elemen matriks
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++){
            result[i][j] = matrix1[i][j] - matrix2[i][j];
            cout << result[i][j] << "\t";
        }
        // Pindah ke baris baru setelah satu baris matriks selesai ditampilkan
        puts("");
    }
}
// Fungsi untuk melakukan perkalian matriks
void Multiplication () {
    cout << "Hasil Perkalian Matriks : " << endl;
    result[i][j] = 0;
    // Loop untuk melakukan perkalian elemen matriks
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 2; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
            cout << result[i][j] << "\t";
        }
        // Pindah ke baris baru setelah satu baris matriks selesai ditampilkan
        puts("");
    }
}