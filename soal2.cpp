#include<iostream>
#include<vector> //header untuk menggunakan vektor
#include<sstream> //header untuk menggunakan stringstream
using namespace std;

main(){

    int isi, panjangVektor;//deklarasi isi vektor, panjang vektor
    vector<int> vektor;//deklarasi nama vektor
    string input;//deklarasi variabel inputam

    system("cls");//clearscreen

    cout<<"Masukkan deret vektor : "<<endl;
    getline(cin,input);

    stringstream ss(input);//memisahkan karakter dalam string

    while(ss>>isi){//memasukkan masing masing karakter yang sudah dipisah ke dalam variabel isi
        vektor.push_back(isi);//menambahkan masing masing karakter yang sudah dipisah ke dalam vektor
    }

    cout<<"Panjang Vektor : "<<vektor.size()<<endl;//menginisialisasi panjang vektor
    panjangVektor = vektor.size();//mengisi variabel panjangVektor dengan panjang/ukuran vektor

    for(int i=0; i<vektor.size(); i++){//menampilkan isi vektor dan menghapusnya
        cout<<vektor[i]<<endl;
        panjangVektor--;
    }

    cout<<"Panjang Vektor : "<<panjangVektor<<endl;//menampilkan panjang vektor setelah dihapus
}
