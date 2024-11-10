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
    cout << "Wprowadzona liczba: " << liczba;
    if (czy_pierwsza(liczba)) {
        cout << " jest liczb¹ pierwsz¹." << endl;
    } else {
        cout << " nie jest liczb¹ pierwsz¹." << endl;
    }
    return 0;
}
