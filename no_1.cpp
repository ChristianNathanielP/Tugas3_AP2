#include<iostream>
#include<conio.h> //agar bisa menggunakan getche
using namespace std;

void penjumlahan(int arr1[][2], int arr2[][2], int hasil[][2]){ //fungsi penjumlahan
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            hasil[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

void pengurangan(int arr1[][2], int arr2[][2], int hasil[][2]){ //fungsi pengurangan
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            hasil[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
}

void perkalian(int arr1[][2], int arr2[][2], int hasil[][2]){ //fungsi perkalian
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            hasil[i][j] = 0;
            for(int k=0; k<2; k++){
                hasil[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
}

void outputArray(int arr[][2]){ //fungsi untuk menampilkan output hasil operasi
    for (int i = 0; i<2; i++) {
        cout<<"[ ";
        for (int j = 0; j < 2; j++) {
            cout << arr[i][j] << " ";
        }
        cout <<"]" << endl;
    }
}

main(){

    //deklarasi variabel
    int a[2][2];
    int b[2][2];
    int jumlah[2][2];
    int kurang[2][2];
    int kali[2][2];

    system("cls");//clearscreen

    //input nilai matriks ke-1
    cout<<"Masukkan nilai matriks ke-1\n";
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<"Baris ke-"<<i+1<<" kolom ke-"<<j+1<<" : ";
            cin>>a[i][j];
        }
    }
    for(int i=0; i<2; i++){//menampilkan matriks ke-1
        cout<<"[ ";
        for(int j=0; j<2; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"]"<<endl;
    }   
    getch();
    system("cls");


    //input nilai matriks ke-2
    cout<<"Masukkan nilai matriks ke-2\n";
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<"Baris ke-"<<i+1<<" kolom ke-"<<j+1<<" : ";
            cin>>b[i][j];
        }
    }
    for(int i=0; i<2; i++){//menampilkan matriks ke-2
        cout<<"[ ";
        for(int j=0; j<2; j++){
            cout<<b[i][j]<<" ";
        }
        cout<<"]"<<endl;
    }   
    getch();
    system("cls");

    penjumlahan(a,b,jumlah);//fungsi untuk menjumlahkan matriks
    pengurangan(a,b,kurang);//fungsi untuk mengurangkan matriks
    perkalian(a,b,kali);//fungsi untuk mengalikan matriks

    cout << "Hasil penjumlahan matriks:" << endl;
    outputArray(jumlah);//fungsi untuk menampilkan hasil penjumlahan matriks
    cout << "Hasil pengurangan matriks:" << endl;
    outputArray(kurang);//fungsi untuk menampilkan hasil pengurangan matriks
    cout << "Hasil perkalian matriks:" << endl;
    outputArray(kali);//fungsi untuk menampilkan hasil perkalian matriks
}