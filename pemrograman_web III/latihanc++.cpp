#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float hargaBarang, totalBeli, diskon, totalBayar;
    int jumlahBarang;

    // Input
    cout << "====Muhammad Arifin Ilham====" <<endl;
    cout << "Masukkan harga barang: ";
    cin >> hargaBarang;
    cout << "Masukkan jumlah barang: ";
    cin >> jumlahBarang;

    // Hitung total beli
    totalBeli = hargaBarang * jumlahBarang;

    // Tentukan diskon
    if (jumlahBarang > 100) {
        diskon = 0.15 * totalBeli;
    } else {
        diskon = 0.05 * totalBeli;
    }

    // Hitung total bayar
    totalBayar = totalBeli - diskon;

    // Output
    cout << fixed << setprecision(2);
    cout << "Total beli       : Rp " << totalBeli << endl;
    cout << "Diskon           : Rp " << diskon << endl;
    cout << "Total yang dibayar: Rp " << totalBayar << endl;

    return 0;
}