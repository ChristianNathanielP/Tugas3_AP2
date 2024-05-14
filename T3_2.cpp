#include <iostream>
#include <vector>
using namespace std;

int main() {
    system ("cls");
    vector<int> numbers;
    string input;

    cout << "Masukkan sebuah deretan angka menggunakan vektor: ";
    cin >> input;

    for (char ch : input) {
        numbers.push_back(ch - '0'); 
    }
    
    cout << "Deretan angka: ";
    for (int num : numbers) {
        cout << num;
    }
    cout << endl;
    cout << "Panjang Vektor: " << numbers.size() << endl;

    while (!numbers.empty()) {
        cout << numbers.front() << endl;
        numbers.erase(numbers.begin());  
    }

    cout << "Panjang Vektor: " << numbers.size() << endl;

    return 0;
}
