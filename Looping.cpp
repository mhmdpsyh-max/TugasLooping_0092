#include <iostream>
using namespace std;

int n;
int pilihan;

bool cekPrima(int n) {
    if (n <= 1) {
        return false;
    }

    int i = 2 ;
    while (i <= n / 2) {
        if (n % i == 0) {
            return false;
        }
        i++;
    }
    return true;
}

bool cekFibonacci (int n) {
    int a = 0, b = 1, c = 0 ;
    while ( c <= n) {
        if (c == n) {
            return true;
        }
        c = a + b;
        a = b;
        b = c;
    }
    return false;
}

void inputAngka () {
    cout<< "Masukkan angka :";
    cin >> n;
}

void hasilPrima () {
    if (cekPrima(n)) {
        cout << n << " adalah bilangan prima" <<endl;
    } else {
        
    }
}