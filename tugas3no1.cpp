#include <iostream> //header untuk fungsi-fungsi standar dalam C++, seperti cin dan cout
using namespace std;

void inputmatriks(int matriks[][2]) {   //fungsi untuk input elemen-elemen matriks
    cout << endl;   //baris kosong
    cout << "Masukkan elemen matriks" << endl;
    for (int i=0; i<2; i++) {   //perulangan untuk baris (i)
        for (int j=0; j<2; j++) {   //perulangan untuk kolom (j)
            cout << "Baris ke-" << i << " Kolom ke-" << j << " : "; cin >> matriks[i][j];   //menampilkan teks agar user menginput elemen matriks pada baris & kolom tertentu dan menyimpan input tersebut dalam variabel matriks[i][j]
        }
    }
}

void jumlahmatriks(int matriks1[][2], int matriks2[][2]) {  //fungsi untuk penjumlahan matriks
    cout << endl;   //baris kosong
    int hasil[2][2];    //deklarasi array dua dimensi "hasil" bertipe data integer 
    cout << "Hasil Penjumlahan Matriks" << endl;
    for (int i=0; i<2; i++) {   //perulangan untuk baris (i)
        for (int j=0; j<2; j++) {   //perulangan untuk kolom (j)
            hasil[i][j] = matriks1[i][j] + matriks2[i][j];  //menjumlahkan matriks1 dan matriks2 dan menyimpannya pada variabel hasil[i][j]
            cout << hasil[i][j] << " "; //menampilkan hasil penjumlahan matriks
        }
        cout << endl;
    }
}

void kurangmatriks(int matriks1[][2], int matriks2[][2]) {  //fungsi untuk pengurangan matriks
    cout << endl;   //baris kosong
    int hasil[2][2];    //deklarasi array dua dimensi "hasil" bertipe data integer
    cout << "Hasil Pengurangan Matriks" << endl;
    for (int i=0; i<2; i++) {   //perulangan untuk baris (i)
        for (int j=0; j<2; j++) {   //perulangan untuk kolom (j)
            hasil[i][j] = matriks1[i][j] - matriks2[i][j];  //mengurangkan matriks1 dan matriks2 dan menyimpannya pada variabel hasil[i][j]
            cout << hasil[i][j] << " "; //menampilkan hasil pengurangan matriks
        }
        cout << endl;
    }
}

void kalimatriks(int matriks1[][2], int matriks2[][2]) {    //fungsi untuk perkalian matriks
    int hasil[2][2];    //deklarasi array dua dimensi "hasil" bertipe data integer
    cout << endl;   //baris kosong
    cout << "Hasil Perkalian Matriks" << endl;
    for (int i=0; i<2; i++) {   //perulangan untuk baris (i)
        for (int j=0; j<2; j++) {   //perulangan untuk kolom (j)
            hasil[i][j] = 0;    //inisialisasi nilai elemen pada baris 'i' dan kolom 'j' dari matriks hasil menjadi 0
            for (int k=0; k<2; k++) {   //perulangan untuk mengalikan elemen pada kolom 'k' dari matriks1 dengan elemen pada baris 'k' dari matriks2
                hasil[i][j] += matriks1[i][k] * matriks2[k][j]; //mengalikan matriks antara elemen pada baris 'i' dan kolom 'k' dari matriks1 dengan elemen pada baris 'k' dan kolom 'j' dari matriks2 lalu hasilnya dijumlahkan dengan elemen hasil pada baris 'i' dan kolom 'j'
            }
            cout << hasil[i][j] << " "; //menampilkan hasil perkalian matriks
        }
        cout << endl;
    }
}

int main () {   //begin program utama
    system("CLS");  //membersihkan layar
    char ulang; //deklarasi variabel "ulang" yang bertipe data char
    do {    //begin blok do-while
        int matriks1[2][2], matriks2[2][2]; //deklarasi variabel matriks1[2][2] dan matriks2[2][2] yang bertipe data integer
        system("CLS");  //membersihkan layar
        cout << "--------------------------------------------------\n";
        cout << "| Program Operasi Aritmatika Matriks Dua Dimensi |\n";
        cout << "--------------------------------------------------\n";
        inputmatriks(matriks1); //memanggil fungsi untuk menginput elemen-elemen matriks1
        inputmatriks(matriks2); //memanggil fungsi untuk menginput elemen-elemen matriks1
        jumlahmatriks(matriks1, matriks2);  //memanggil fungsi untuk penjumlahan matriks
        kurangmatriks(matriks1, matriks2);  //memanggil fungsi untuk pengurangan matriks
        kalimatriks(matriks1, matriks2);    //memanggil fungsi untuk perkalian matriks
        cout << endl;
        cout << "Apakah anda ingin mengulangi program? (Y/T): "; cin >> ulang;  //bertanya apakah user ingin mengulangi program? Lalu jawaban disimpan dalam variabel "ulang"
    } while (ulang == 'Y' || ulang == 'y'); //jika jawaban user 'Y' atau 'y' maka program kembali ke loop awal
    return 0;
}