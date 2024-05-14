#include <iostream>
#include <vector>

int main() {
    std::vector<int> angka;
    std::string input;

    // Memasukkan deretan angka ke dalam vektor
    std::cout << "Masukkan sebuah deretan angka: ";
    std::cin >> input;

    for (char c : input) {
        if (isdigit(c)) {
            angka.push_back(c - '0');
        }
    }

    std::cout << "Deretan angka: ";
    for (int num : angka) {
        std::cout << num;
    }
    std::cout << std::endl;

    std::cout << "Panjang Vektor: " << angka.size() << std::endl;

    while (!angka.empty()) {
        std::cout << angka.front() << std::endl;
        angka.erase(angka.begin());
        std::cout << "Panjang Vektor: " << angka.size() << std::endl;
    }

    return 0;
}
