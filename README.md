#include<iostream>
#include<string>
using namespace std; main()
{string nama,umur,kelas,nim,usia,hobi;

// Input data dari user
cout << "Masukkan Nama	: ";
getline(cin, nama);

cout << "Masukkan Umur	: ";
getline (cin, umur);

cout << "Masukkan Kelas	: ";
getline(cin, kelas);

cout << "Masukkan NIM	: ";
getline(cin, nim);

 cout << "Masukkan Hobi	: ";
 getline(cin, hobi);

// Output data
cout << "\n=== Data Diri ===" << endl;
cout << "Nama   : " << nama << endl;
cout << "Umur   : " << umur << " tahun" << endl;
cout << "Kelas  : " << kelas << endl;
cout << "NIM    : " << nim << endl;
cout << "Hobi   : " << hobi << endl;

}
