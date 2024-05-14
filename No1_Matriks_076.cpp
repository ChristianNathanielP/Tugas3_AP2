#include <iostream>
using namespace std;

int matriksB[2][2], matriksA[2][2], hasil[2][2];

void NilaiMatriks()
{
    cout << "~~~~~~ PROGRAM MATRIKS ~~~~~~" << endl;
    cout << "\nMasukkan nilai Matriks pertama\n";
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            cout << "Matriks A Baris " << i + 1 << " Kolom " << j + 1 << " = ";
            cin >> matriksA[i][j];
        }
    }
    cout << "Masukkan elemen matriks kedua\n";
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            cout << "Matriks B Baris "  << i + 1 << " Kolom " << j + 1 << " = ";
            cin >> matriksB[i][j];
        }
    }

}

void TampilMatriks()
{
    cout << "============= Elemen Matriks =============\n";
    cout << "Matriks A : \n";
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            cout << matriksA[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "Matriks B : \n";
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            cout << matriksB[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "==========================================\n";
}

void pengurangan()
{
    cout << "Hasil Pengurangan Matriks : " << endl;
    // Loop untuk pengurangan elemen matriks
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++)
        {
            hasil[i][j] = matriksA[i][j] - matriksB[i][j];
            cout << hasil[i][j] << "\t";
        }
        cout << endl;
    }
}

void Penjumlahan () {
    cout << "Hasil Penjumlahan Matriks : " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++){
            hasil[i][j] = matriksA[i][j] + matriksB[i][j];
            cout << hasil[i][j] << "\t";
        }
        cout << endl;
    }
}

void Perkalian () 
{
    cout << "Hasil Perkalian Matriks : " << endl;
    for (int i = 0; i < 2; i++) 
    {   
        for (int j = 0; j < 2; j++) 
        {
            hasil[i][j] =0;
            for (int k = 0; k < 2; k++) 
            {
                hasil[i][j] += matriksA[i][k] * matriksB[k][j];
            }
            cout << hasil[i][j] << "\t";
        }
        cout << endl;
    }
}

int main ()
{
    char jawab;
    ulang :
    system("CLS");
    NilaiMatriks();
    TampilMatriks();
    Penjumlahan();
    pengurangan();
    Perkalian();
    cout << "\nApakah Anda ingin mengulang = ";
    cin >> jawab;
    if (jawab == 'y' or jawab == 'Y')
    {
        goto ulang;
    }
}
// int main() 
// {
//     int matriks1[2][2], matriks2[2][2], hasil[2][2];
//     printf("Masukkan elemen matriks pertama\n");
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 2; j++) {
//             printf("Matriks 1 Baris %d Kolom %d: ", i + 1, j + 1);
//             scanf("%d", &matriks1[i][j]);
//         }
//     }
//     printf("Masukkan elemen matriks kedua\n");
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 2; j++) {
//             printf("Matriks 2 Baris %d Kolom %d: ", i + 1, j + 1);
//             scanf("%d", &matriks2[i][j]);
//         }
//     }
//     for(int i=0; i<2; i++) {
//         for(int j=0; j<2; j++) {
//             hasil[i][j] = matriks1[i][j] + matriks2[i][j];
//         }
//     }
//     printf("Hasil penjumlahan matriks: \n");
//     for(int i=0; i<2; i++) {
//         for(int j=0; j<2; j++) {
//             printf("%d\t", hasil[i][j]);
//         }
//         printf("\n");
//     }
//     int result[2][2];
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 2; j++) {
//             result[i][j] = 0;
//         }
//     }
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 2; j++) {
//             for (int k = 0; k < 2; k++) {
//                 result[i][j] += matriks1[i][k] * matriks2[k][j];
//             }
//         }
//     }

//     printf("Hasil perkalian matriks:\n");
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 2; j++) {
//             printf("%d\t", result[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }
