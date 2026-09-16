#include <iostream>
using namespace std;

int main(){
    int totalBelanja, totalBayar, totalDiskon;
    string persenDiskon;
    float diskon;

    cout << "=== Kalkulator Kasir Toko Buku ===";
    cout << "\nMasukkan total belanja (Rp): "; cin >> totalBelanja;
    
    if (totalBelanja < 100000){
        diskon = 0;
        persenDiskon = "0%";
    } if (100000 <= totalBelanja < 300000){
        diskon = 0.1;
        persenDiskon = "10%";
    } if (totalBelanja >= 300000){
        diskon = 0.2;
        persenDiskon = "20%";
    }
    totalDiskon = totalBelanja * diskon;
    totalBayar = totalBelanja - totalDiskon;

    cout << "\n--- Ringkasan Pembayaran ---" << endl;
    cout << "Diskon (" << persenDiskon << ")    : Rp " << totalDiskon <<endl;
    cout << "Total Bayar    : Rp " << totalBayar;
    return 0;
}