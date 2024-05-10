#include <iostream>
using namespace std;

void input_matriks (int arr[][2]){
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cout << "Baris ke-"<<i+1<<" Kolom ke-"<<j+1<<" = ";
            cin>> arr[i][j];
        }
    }
}
void print_matriks (int arr[][2]){
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cout <<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void penjumlahan_matriks (int matriks1[][2], int matriks2[][2]){
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cout << matriks1[i][j] + matriks2[i][j]<<" ";
        }
        cout<<endl;
    }
}

void pengurangan_matriks (int matriks1[][2], int matriks2[][2]){
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cout << matriks1[i][j] - matriks2[i][j]<<" ";
        }
        cout<<endl;
    }
}
void perkalian_matriks (int matriks1[][2], int matriks2[][2]){
    int hasil[2][2] = {{0,0},{0,0}}; 
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            for(int k = 0; k < 2; k++){
            hasil[i][j] += matriks1[i][k] * matriks2[k][j];
            }
        }
    }
    print_matriks(hasil);
}
main(){
    system("cls");
    int arr1[2][2], arr2[2][2];
    cout<<"Matriks 1"<<endl;
    input_matriks(arr1); cout<<endl;
    cout<<"Matriks 2"<<endl;
    input_matriks(arr2); cout<<endl;
    system("cls");
    cout<<"Matriks 1 : "<<endl;
    print_matriks(arr1); cout<<endl;
    cout<<"Matriks 2 : "<<endl;
    print_matriks(arr2); cout<<endl;
    cout<<"Hasil Penjumlahan Matriks : "<<endl;
    penjumlahan_matriks(arr1, arr2); cout<<endl;
    cout<<"Hasil Pengurangan Matriks : "<<endl;
    pengurangan_matriks(arr1, arr2); cout<<endl;
    cout<<"Hasil Perkalian Matriks : "<<endl;
    perkalian_matriks(arr1, arr2); cout<<endl;
}