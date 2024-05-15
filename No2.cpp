#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main() {

    int nilai, pvector;
    vector<int> vector;
    string input;

    system("cls");

    cout << "Masukkan deret vector : " << endl;
    getline(cin, input);

    stringstream ss(input);

    while (ss >> nilai) {
        vector.push_back(nilai);
    }

    cout << "Panjang Vector: " << vector.size() << endl;
    pvector = vector.size();

    for (int i = 0; i < vector.size(); i++) {
        cout << vector[i] << endl;
        pvector--;
    }

    cout << "Panjang Vector: " << pvector << endl;
}