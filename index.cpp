#include <iostream>
using namespace std;

int main() {
    int angka;

    cout << "Masukkan bilangan: ";
    cin >> angka;

    if (angka > 0) {
        cout << "Bilangan " << angka << " adalah positif." << endl;
    } else if (angka < 0) {
        cout << "Bilangan " << angka << " adalah negatif." << endl;
    } else {
        cout << "Bilangan " << angka << " adalah nol." << endl;
    }

    return 0;
}