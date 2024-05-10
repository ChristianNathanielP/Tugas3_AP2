#include <iostream>
#include <vector>
using namespace std;

main(){
    system("cls");
    int n[100], j;
    vector <int> vektor;
    cout<<"Jumlah angka : ";cin>>j;
    //system("cls");
    cout<< "Masukkan deretan angka : "<<endl; 
    for (int i = 0; i < j; i++){
        cin>> n[i];
        vektor.push_back(n[i]);
    }
    system("cls");
    for (int i = 0; i < vektor.size(); i++){
        cout << vektor[i]<<" ";
    }
    cout<<"\nPanjang Vektor : "<<vektor.size()<<endl;
    int i = 0; 
    while (i < vektor.size()){
        cout << vektor[0]<<endl;
        vektor.erase(vektor.begin());
    }
    cout<<"Panjang Vektor : "<<vektor.size()<<endl;
}