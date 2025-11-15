#include <iostream>
using namespace std;

void tampilkanMenu(){
    cout << "\nPilih mata uang yang ingin ditukar : \n";
    cout << "1. USD (Dolar Amerika)\n";
    cout << "2. EUR (Euro)\n";
    cout << "3. JPY (Yen Jepang)\n";
    cout << "4. MYR (Ringgit Malaysia)\n";
    cout << "0. Keluar\n";
    cout << "Pilihan : ";
}
double konversi(double rupiah, double kurs){
    return rupiah / kurs;
}

int main (){
    string nama [4] = {"USD", "EUR", "JPY", "MYR"};
    double kurs [4] = {16712, 19421, 108, 4044};
    double rupiah, hasil;
    int pilihan;

    cout << "========== PROGRAM KONVERSI MATA UANG =============\n";
    while (true){
        cout << "\nMasukkan jumlah uang yang ingin ditukar (dalam Rupiah) : ";
        cin >> rupiah;

        tampilkanMenu();
        cin >> pilihan;

        if (pilihan == 0) {
            cout << "\nProgram selesai. Terima kasih:)\n";
            break;
        }
        if (pilihan < 1 || pilihan > 4) {
            cout << "Pilihan tidak valid\n";
            continue;
        }
        hasil = konversi(rupiah, kurs[pilihan - 1]);
        cout << "\nHasil konversi ke " << nama [pilihan - 1] << " = " << hasil << " " << nama [pilihan - 1] << endl;
    }
return 0;
}
