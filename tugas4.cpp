#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Membersihkan layar
    system("CLS");
    // Deklarasi variabel deret sebagai integer
    int deret;
    // Deklarasi vektor sequence untuk menyimpan deret angka
    vector <int> sequence;
    // Menampilkan judul program
    cout << "# Program Deret Angka dengan Vector #" << endl;
    cout << "=====================================" << endl;
    // Menampilkan instruksi kepada pengguna
    cout << "Silakan input deretan angka!" << endl;
    cout << "Pisahkan setiap angka dengan spasi." << endl; 
    cout << "Akhiri deret dengan angka 0." << endl;
    cout << "Contoh : 1 2 3 4 5 0" << endl;
    cout << "Deretan angka : ";
    // Loop tak terbatas untuk meminta pengguna memasukkan angka
    while (true) {
        // Membaca masukan dari pengguna
        cin >> deret;
        // Jika pengguna memasukkan angka 0, keluar dari loop
        if (deret == 0) {
            break;
        }
        // Memasukkan angka ke dalam vektor sequence
        sequence.push_back(deret); 
    }
    // Membersihkan layar
    system("CLS");
    // Menampilkan kembali judul program setelah membersihkan layar
    cout << "# Program Deret Angka dengan Vector #" << endl;
    cout << "=====================================" << endl;
    // Menampilkan deretan angka yang dimasukkan oleh pengguna secara horizontal
    for (int i=0;i<sequence.size();i++) {
        cout << sequence[i] << "   ";
    }
    cout << endl;
    // Menampilkan panjang vektor sequence
    cout << "Panjang Vektor : " << sequence.size() << endl;
    // Menampilkan deretan angka yang dimasukkan oleh pengguna secara vertikal
    for (int i=0;i<sequence.size();i++) {
        cout << sequence[i] << endl;
    }
    // Mengosongkan vektor sequence
    sequence.clear();
    // Menampilkan panjang vektor sequence setelah dikosongkan
    cout << "Panjang Vektor : " << sequence.size() << endl; 
}