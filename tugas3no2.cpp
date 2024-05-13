#include <iostream> //header untuk fungsi-fungsi standar dalam C++, seperti cin dan cout
#include <vector>   //header vector untuk menggunakan fungsi berkaitan vektor
using namespace std;

int main () {   //begin program utama
    system("CLS");  //membersihkan layar
    char ulang; //deklarasi variabel "ulang" yang bertipe data char
    int n, angka;   //deklarasi variabel "n" dan "angka" yang bertipe data integer
    vector <int> deret; //deklarasi vektor "deret" untuk menyimpan deret angka
    do {
        cout << "----------------------------------------------------\n";   //menampilkan teks
        cout << "|           Program Vektor Deretan Angka           |\n";
        cout << "----------------------------------------------------\n";
        cout << "Masukkan jumlah angka yang ingin dimasukkan: "; cin >> n;  //meminta inputan jumlah angka yang ingin dimasukkan dan menyimpan inputan dalam variabel "n"
        cout << "Masukkan sebuah deretan " << n << " angka: ";  //menampilkan teks
        for (int i=0; i<n; ++i) {  
            cin >> angka;
            deret.push_back(angka); //memasukkan setiap angka yang diinput ke dalam vektor "deret" 
        }
        cout << "Vektor : ";
        for (int i=0; i<deret.size(); i++){
            cout << deret[i] << " ";    //menampilkan isi vektor "deret"
        }
        cout << endl;
        cout << "Panjang vektor : " << deret.size() << endl;
        for (int i=0; i<deret.size(); ++i) {    //menampilkan panjang vektor "deret"
            cout << deret[i] << endl;
        }
        deret.clear();  //menghapus semua elemen dalam vektor "deret"
        for (int i=0; i<deret.size(); i++){
            cout << deret[i] << endl;
        }
        cout << "Panjang vektor : " << deret.size() << endl;
        for (int i=0; i<deret.size(); ++i) {
            cout << deret[i] << endl;   //menampilkan panjang vektor "deret" yang sudah
        }
        cout << "Apakah anda ingin mengulangi program? (Y/T): "; cin >> ulang;  //bertanya apakah user ingin mengulangi program? Lalu jawaban disimpan dalam variabel "ulang"
    } while (ulang == 'Y' || ulang == 'y'); //jika jawaban user 'Y' atau 'y' maka program kembali ke loop awal
    return 0;
}