#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> angka;

    cout << "Masukkan Sebuah Deretan Angka Menggunakan Vektor  : ";

    char user;
    string number = "";
    while (cin.get(user) && user != '\n') {
        if (user != ' ') {
            number += user;
        } else {
            angka.push_back(stoi(number)); 
            number = ""; 
        }
    }

    if (!number.empty()) {
        angka.push_back(stoi(number));
    }

    for (int num : angka) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Panjang Vektor: " << angka.size() << '\n';

    while (!angka.empty()) {
        cout << " " << angka.front() << '\n';
        angka.erase(angka.begin()); 
    }

    cout << "Panjang Vektor: " << angka.size() << " \n";
    return 0;
}