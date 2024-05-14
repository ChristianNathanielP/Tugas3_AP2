#include<iostream>
#include<vector>
#include<sstream>
using namespace std;

main(){

    int isi, panjangVektor;
    vector<int> vektor;
    string input;

    system("cls");

    cout<<"Masukkan deret vektor : "<<endl;
    getline(cin,input);

    stringstream ss(input);

    while(ss>>isi){
        vektor.push_back(isi);
    }

    cout<<"Panjang Vektor : "<<vektor.size()<<endl;
    panjangVektor = vektor.size();

    for(int i=0; i<vektor.size(); i++){
        cout<<vektor[i]<<endl;
        panjangVektor--;
    }

    cout<<"Panjang Vektor : "<<panjangVektor<<endl;
}