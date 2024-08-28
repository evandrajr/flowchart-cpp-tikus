#include <iostream>
#include <string>

using namespace std;

int main() {
    string opsi;
    bool validInput = true;

    cout << "START" << endl;
    cout << "Tikus menemukan keju" << endl;
    cout << "Tikus mengambil keju" << endl;
    cout << "Kucing mengawasi tikus. Apakah tikus menunggu? (yes/no): ";
    cin >> opsi;

    if (opsi == "no") {
        cout << "Tikus membawa keju ke anak-anaknya" << endl;
    } else if (opsi == "yes") {
        cout << "Tikus menunggu..." << endl;
        cout << "Tikus membawa keju ke anak-anaknya setelah menunggu" << endl;
    } else {
        validInput = false;
        cout << "Pilihan tidak valid! Sistem berhenti." << endl;
    }

    if (validInput) {
        cout << "Anak-anak tikus makan keju" << endl;
        cout << "Induk tikus berjaga di depan pintu" << endl;
        cout << "Memeriksa jika semua anak tikus sudah makan" << endl;
        cout << "END" << endl;
    }

    return 0;
}
