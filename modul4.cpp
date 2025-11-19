#include <iostream>
using namespace std;
int main() {
    double nilai;
    cout << "Program Penentuan Nilai Mutu" << endl;
    cout << "Masukkan nilai akhir: ";
    cin >> nilai;

    cout << "\nHasil: " << endl;

    if (nilai >= 89) {
        cout << "Nilai mutu: A" << endl;
        cout << "Naik Kelas" << endl;
    }
    else if (nilai >= 80 && nilai <= 89) {
        cout << "Nilai mutu: B" << endl;
        cout << "Naik Kelas" << endl;
    }
    else if (nilai >= 70 && nilai <= 80) {
        cout << "Nilai mutu: C" << endl;
        cout << "Naik Kelas" << endl;
    }
    else if (nilai >= 60 && nilai <= 70) {
        cout << "Nilai mutu: D" << endl;
        cout << "Tinggal Kelas" << endl;
    }
    else if (nilai <= 60) {
        cout << "Nilai mutu: E" << endl;
        cout << "Tinggal Kelas" << endl;
    }
    return 0;
}