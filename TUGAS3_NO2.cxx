#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

//Mulai
int main (){
    
    //Deklarasi Variabel
    int panjang_vektor, nilai;
    vector<int> vektorku;
    string input;
    
    cout<<"________________________________________________________________________"<<endl;
    //Menerima Input-an Pengguna
    getline(cin, input);
    cout<<"________________________________________________________________________"<<endl;
    
    //Membersihkan Layar
    system("cls");
    
    cout<<"________________________________________________________________________"<<endl;
    
    //Menampilkan Input-an Pengguna
    cout<<input<<endl;
    
    //Mengubah Tipe Data Variabel Input Dari String Menjadi Integer dan Mengambil Nilai Dari Input-an Pengguna Dan Memisahkannnya Supaya Gampang Untuk Dimasukkan Kedalam Vektor
    stringstream ss(input);
    
    //Memasukkan Nilai Dari Input-an Pengguna Kedalam Vektor
    while (ss >> nilai) {
        vektorku.push_back(nilai);
    }
    
    //Menampilkan Panjang Vektor Awal
    cout<<"Panjang Vektor: "<<vektorku.size()<<endl;
    
    //Menginisialisasikan Variabel panjang_vektor Supaya Gampang Mengurangi Panjang Vektor
    panjang_vektor = vektorku.size();
    
    //Menampilkan Nilai Dari vektorku Yang Diinput-kan Pengguna dan Mengurangi Nilai Dari Variabel panjang_vektor
    for(int j = 0; j < vektorku.size(); j++){
        cout << vektorku[j] << endl;
        panjang_vektor--;
    }
    
    //Menampilkan Panjang Vektor Akhir
    cout<<"Panjang Vektor: "<<panjang_vektor<<endl;
    cout<<"________________________________________________________________________"<<endl;
    
    return 0;
}
//Selesai