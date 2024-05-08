#include <iostream>
using namespace std;

//Fungsi Prototipe
void tampil_array(int arr[][2], int baris, int kolom); 
void penjumlahan(int arr1[][2], int arr2[][2], int hasil[][2]);
void pengurangan(int arr1[][2], int arr2[][2], int hasil[][2]);
void perkalian(int arr1[][2], int arr2[][2], int hasil[][2]);

//Mulai
int main() {
    
    //Deklarasi Variabel
    int arr1[2][2]; 
    int arr2[2][2];
    int hasil_jumlah[2][2];
    int hasil_kurang[2][2];
    int hasil_kali[2][2];
    
    //Codingan Agar Pengguna Meng-inputkan Nilai Dari Array 2D Ke-1
    cout << "Array Ke-1:" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << "Masukkan Nilai Array Ke-1 [" << i << "][" << j << "]: ";
            cin >> arr1[i][j];
        }
    }
    cout << endl;
    
  //Codingan Agar Pengguna Meng-inputkan Nilai Dari Array 2D Ke-2
    cout << "Array Ke-2:" << endl;
    for(int k = 0; k < 2; k++) {
        for(int l = 0; l < 2; l++) {
            cout << "Masukkan Nilai Array Ke-2 [" << k << "][" << l << "]: ";
            cin >> arr2[k][l];
        }
    }
    cout << endl << endl;
  
    //Pemanggilan Fungsi Guna Menampilkan Isi Dari Matriks Ke-1 Yang Diinputkan Pengguna
    cout << "Matriks Array Ke-1:" << endl;
    tampil_array(arr1, 2, 2);
    
    //Pemanggilan Fungsi Guna Menampilkan Isi Dari Matriks Ke-2 Yang Diinputkan Pengguna
    cout << "Matriks Array Ke-2:" << endl;
    tampil_array(arr2, 2, 2);
    
    cout<<endl<<endl;
    
      //Pemanggilan Fungsi Agar Diproses Hasil Dari Penjumlahan, Pengurangan, dan Perkalian Matriks
    penjumlahan(arr1, arr2, hasil_jumlah);
    pengurangan(arr1, arr2, hasil_kurang);
    perkalian(arr1, arr2, hasil_kali);
    
    //Pemanggilan Fungsi Agar Ditampilkan Hasil Dari Penjumlahan, Pengurangan, dan Perkalian Matriks
    cout << "Hasil penjumlahan matriks:" << endl;
    tampil_array(hasil_jumlah, 2, 2);
    cout << "Hasil pengurangan matriks:" << endl;
    tampil_array(hasil_kurang, 2, 2);
    cout << "Hasil perkalian matriks:" << endl;
    tampil_array(hasil_kali, 2, 2);
    
    return 0;
}
//Selesai

//Isi Dari Fungsi Prototipe

void tampil_array(int arr[][2], int baris, int kolom) {
    for (int i = 0; i < baris; ++i) {
        cout<<"[ ";
        for (int j = 0; j < kolom; ++j) {
            cout << arr[i][j] << " ";
        }
        cout <<"]" << endl;
    }
}

void penjumlahan(int arr1[][2], int arr2[][2], int hasil[][2]){
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
           hasil[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

void pengurangan(int arr1[][2], int arr2[][2], int hasil[][2]){
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
           hasil[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
}

void perkalian(int arr1[][2], int arr2[][2], int hasil[][2]){
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            hasil[i][j] = 0;
            for(int k = 0; k < 2; k++) {
                hasil[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
}