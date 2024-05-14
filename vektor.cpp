#include <iostream>
#include <vector>
using namespace std;

main() {
    vector<int> v;
    int n, m;

    cout << "Masukkan jumlah isi dalam vektor: ";
    cin >> n;

    cout << "Masukkan isi vektor:\n";
    for (int i = 0; i < n; i++) {
        cin >> m;
        v.push_back(m);
    }

    system("cls");

    for (int i : v) {
        cout << i << " ";
    }
    cout << "\npanjang vektor: " << v.size() << "\n";

    for (int i : v) {
        cout << i << "\n";
    }

    v.clear();
    cout << "panjang vektor: " << v.size() << "\n";

    return 0;
}
