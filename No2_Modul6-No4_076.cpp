//header yg dibutuhkan
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector <int> deret_vektor;
    string deret_string;
    
    cout << "Masukkan Deret Angka (tanpa spasi): ";
    cin >> deret_string;

    cout << "\nDeret Awal : ";
    for (int i=0; i< deret_string.length(); i++){
        deret_vektor.push_back((deret_string[i] - '0')); //memasukkan nilai deret ke dalam variabel bertipe vektor
        //elemen deret kan awalnya string, trus dimasukkin satu satu ke variabel bertipe vektor dengan kode diatas
        //kenapa harus "-'0'", itu agar mengubah nilai string menjadi integer(bukan konversi), dan tidak akan mengubah nilainya sama sekali

        cout << deret_vektor[i]; //menampilkan deret dalam vektor secara horizontal
    }
    
    cout <<"\nPanjang Vektor : "<< deret_vektor.size() << endl;

    cout << "Deret setelah : " << endl;
    //menampilkan deret dalam vektor secara vertikal 
    for (int i=0; i < deret_vektor.size(); i++)
    {
        cout << deret_vektor[i] << endl;
    }
    //dibawah iini kode untuk menghapus satu satu elemen deret pada si vektor dengan perulangan
    int size_awal = deret_vektor.size();
    for (int i = deret_vektor.size()-1; i >=0; i--)
    {
        deret_vektor.erase(deret_vektor.begin() + i);
    }
    //deret_vektor.clear(); bisa pake clear klo langsung mau hapus semua elemen vektor tanpa looping
    cout << "Panjang Vektor akhir : " << deret_vektor.size();  


}