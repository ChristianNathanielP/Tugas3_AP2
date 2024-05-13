#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main() {
    vector<int> numbers;
    int input;

    // Input deretan angka
    cout << "Masukkan sebuah deretan angka menggunakan vektor:" << endl;
    while (true) {
        cin >> input;
        if (cin.fail()) {
            cout << "Masukkan hanya angka!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            numbers.push_back(input);
        }
        if (cin.peek() == '\n') {
            break;
        }
    }

    // Tampilkan deretan angka dan panjang vektor
    cout << "Deretan angka: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    cout << "Panjang Vektor: " << numbers.size() << endl;

    // Hapus dan tampilkan angka satu persatu
    while (!numbers.empty()) {
        cout << numbers.front() << endl;
        numbers.erase(numbers.begin());
    }

    // Tampilkan panjang vektor setelah dihapus
    cout << "Panjang Vektor: " << numbers.size() << endl;

    return 0;
}
