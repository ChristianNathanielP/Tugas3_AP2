#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;

    cout << "Masukkan Sebuah Deretan Angka Menggunakan Vektor  : ";

    char user;
    string number = "";
    while (cin.get(user) && user != '\n') {
        if (user != ' ') {
            number += user;
        } else {
            numbers.push_back(stoi(number)); 
            number = ""; 
        }
    }

    if (!number.empty()) {
        numbers.push_back(stoi(number));
    }

    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Panjang Vektor: " << numbers.size() << '\n';

    while (!numbers.empty()) {
        cout << " " << numbers.front() << '\n';
        numbers.erase(numbers.begin()); 
    }

    cout << "Panjang Vektor: " << numbers.size() << " \n";

    return 0;
}