#include <iostream>
#include <conio.h>
using namespace std;

void penjumlahan(int arr1[][2], int arr2[][2], int hasil[][2])
{
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            hasil[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

void pengurangan(int arr1[][2], int arr2[][2], int hasil[][2])
{
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            hasil[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
}

void perkalian(int arr1[][2], int arr2[][2], int hasil[][2])
{
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            hasil[i][j] = 0;
            for(int k = 0; k < 2; k++) {
                hasil[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
}

void hasilarray(int arr[][2])
{
    for (int i = 0; i < 2; i++) {
        cout << "[ ";
        for (int j = 0; j < 2; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "]" << endl;
    }
}

int main() {

    int matrix1[2][2];
    int matrix2[2][2];
    int jlh[2][2];
    int krg[2][2];
    int kali[2][2];

    system("cls");

    cout << "Masukkan nilai Matrix 1\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << "Baris " << i + 1 << " Kolom " << j + 1 << " : ";
            cin >> matrix1[i][j];
        }
    }
    cout << "Matrix 1:\n";
    for(int i = 0; i < 2; i++) {
        cout << "[ ";
        for(int j = 0; j < 2; j++) {
            cout << matrix1[i][j] << " ";
        }
        cout << "]" << endl;
    }   
    getch();
    system("cls");

    cout << "Masukkan nilai Matrix 2\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << "Baris " << i + 1 << " Kolom " << j + 1 << " : ";
            cin >> matrix2[i][j];
        }
    }
    cout << "Matrix 2:\n";
    for(int i = 0; i < 2; i++) {
        cout << "[ ";
        for(int j = 0; j < 2; j++) {
            cout << matrix2[i][j] << " ";
        }
        cout << "]" << endl;
    }   
    getch();
    system("cls");

    penjumlahan(matrix1, matrix2, jlh); 
    pengurangan(matrix1, matrix2, krg);
    perkalian(matrix1, matrix2, kali);

    cout << "Penjumlahan Matrix : " << endl;
    hasilarray(jlh);
    cout << "Pengurangan Matrix : " << endl;
    hasilarray(krg);
    cout << "Perkalian Matrix : " << endl;
    hasilarray(kali);
}