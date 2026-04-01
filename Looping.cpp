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
}