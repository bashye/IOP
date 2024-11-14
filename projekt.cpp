#include <iostream>
using namespace std;

bool czy_pierwsza(int liczba) {
    if (liczba <= 1) return false;
    for (int i = 2; i * i <= liczba; ++i) {
        if (liczba % i == 0) return false;
    }
    return true;
}

int main() {
    int liczba;
    cin >> liczba;
    if (liczba <= 0) {
        cout << "Podana liczba nie jest dodatnia." << endl;
        return 1;
    }
    cout << "Wprowadzona liczba: " << liczba;
    if (czy_pierwsza(liczba)) {
        cout << " jest liczba pierwsza." << endl;
    } else {
        cout << " nie jest liczba pierwsza." << endl;
    }
    return 0;
}
