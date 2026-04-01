#include <iostream>
using namespace std;

int n;
int pilihan;

bool cekPrima(int n) {
    if (n <= 1) {
        return false;
    }

    int i = 2;
    while (i <= n / 2) {
        if (n % i == 0) {
            return false;
        }
        i++;
    }
    return true;
}

// Function untuk cek bilangan Fibonacci
bool cekFibonacci(int n) {
    int a = 0, b = 1, c = 0;

    while (c <= n) {
        if (c == n) {
            return true;
        }
        c = a + b;
        a = b;
        b = c;
    }
    return false;
}

// Prosedur input
void inputAngka() {
    cout << "Masukkan angka : ";
    cin >> n;
}

// Prosedur tampil hasil prima
void hasilPrima() {
    if (cekPrima(n)) {
        cout << n << " adalah bilangan prima" << endl;
    } else {
        cout << n << " bukan bilangan prima" << endl;
    }
}

// Prosedur tampil hasil fibonacci
void hasilFibonacci() {
    if (cekFibonacci(n)) {
        cout << n << " termasuk bilangan Fibonacci" << endl;
    } else {
        cout << n << " bukan bilangan Fibonacci" << endl;
    }
}

// Function menu
void tampilMenu() {
    cout << "\n===== MENU =====" << endl;
    cout << "1. Cek Bilangan Prima" << endl;
    cout << "2. Cek Bilangan Fibonacci" << endl;
    cout << "0. Keluar" << endl;
    cout << "Pilih menu : ";
}

int main() {

    while (true) {
        tampilMenu();
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                inputAngka();
                hasilPrima();
                break;

            case 2:
                inputAngka();
                hasilFibonacci();
                break;

            case 0:
                cout << "Program selesai..." << endl;
                return 0;

            default:
                cout << "Pilihan tidak valid!" << endl;
        }
    }

    return 0;
}