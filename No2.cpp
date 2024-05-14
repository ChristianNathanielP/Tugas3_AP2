#include <iostream>
#include <vector>
using namespace std;

int main() {
    std::vector<int> angka;
    system ("cls");

    std::cout << "Masukkan Sebuah Deretan Angka Menggunakan Vektor  : ";

    char user;
    std::string a = "";
    while (std::cin.get(user) && user != '\n') {
        if (user != ' ') {
            a += user;
        } else {
            angka.push_back(std::stoi(a)); 
            a = ""; 
        }
    }

    if (!a.empty()) {
        angka.push_back(std::stoi(a));
    }

    for (int num : angka) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Panjang Vektor: " << angka.size() << '\n';

    while (!angka.empty()) {
        std::cout << " " << angka.front() << '\n';
        angka.erase(angka.begin()); 
    }

    std::cout << "Panjang Vektor: " << angka.size() << " \n";

    return 0;
}

