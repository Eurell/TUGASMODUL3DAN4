#include <iostream>
using namespace std;
int main() {
    double harga, diskon, jumlahdiskon, hargasetelahdiskon;

    cout << "\nProgram Menghitung Diskon Barang" << endl;

    cout << "\nMasukkan: ";
    cout << "\nHarga barang (Rp): Rp.";
    cin >> harga;

    cout << "Diskon barang (%): ";
    cin >> diskon;

    jumlahdiskon = harga * (diskon / 100);
    hargasetelahdiskon = harga - jumlahdiskon;

    cout << "\nHasil" << endl;
    cout << "Jumlah diskon: Rp " << jumlahdiskon << endl;
    cout << "Harga setelah diskon: Rp." << hargasetelahdiskon << endl;
    return 0;
}