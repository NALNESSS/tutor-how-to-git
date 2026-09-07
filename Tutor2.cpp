#include <iostream>
using namespace std;

int main(){
    int radius, tinggi;
    float pi = 3.14, luasAlas, volume;

    cout << "Masukkan radius kerucut    : "; cin >> radius;
    cout << "Masukkan tinggi kerucut    : "; cin >> tinggi;

    luasAlas = pi * radius * radius;
    volume = luasAlas * tinggi / 3;

    cout << "\nLuas alas    :" << luasAlas <<
            "\nVolume       :" << volume;
}