#include <iostream>
using namespace std;

int main(){
    int hargaMinum, pilihan, jumlahUang, kurangUang, kembalian, lembar5, lembar1;

    cout << "=== VENDING MACHINE AUTOMAT ===" << endl;
    cout << "pilihan minuman:" << endl;
    cout << "1. Air Mineral (Rp 4000)" << endl;
    cout << "2. Teh Botol (Rp 6000)" << endl;
    cout << "3. Kopi Susu (Rp 10000)" << endl;
    cout << "Pilih kode minuman (1-3): "; cin >> pilihan;
    cout << "Masukkan uang Anda (Rp) : "; cin >> jumlahUang;
    
    switch (pilihan)
    {
    case 1:
        hargaMinum = 4000;
        break;
    case 2:
        hargaMinum = 6000;
        break;
    case 3:
        hargaMinum = 10000;
        break;
    
    default:
        hargaMinum = 0;
        break;
    }
    kembalian = jumlahUang - hargaMinum;
    lembar1 = kembalian % 5000 / 1000;
    lembar5 = kembalian / 5000;
    kurangUang = hargaMinum - jumlahUang;

    if (hargaMinum != 0 && jumlahUang < hargaMinum){
        cout << "\n--- DETAIL TRANSAKSI ---" << endl;
        cout << "Transaksi Gagal! Uang Anda kurang Rp " << kurangUang << "." << endl;
    } if (hargaMinum !=0 && jumlahUang >= hargaMinum){
        cout << "\n--- DETAIL TRANSAKSI ---" << endl;
        cout << "Jumlah kembalian      : Rp " << kembalian << endl;
        cout << "Jumlah Lembar Rp 5000 : " << lembar5 << endl;
        cout << "Jumlah Lembar Rp 1000 : " << lembar1 << endl;
    } if (hargaMinum == 0){
        cout << "ERROR!\nPILIHAN TIDAK TERSEDIA";
    }
    
    return 0;
}