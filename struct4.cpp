#include <iostream>
#include <string>

using namespace std;

struct DetailAlamat {
    string kota;
    string provinsi;
};

struct Mahasiswa {
    string nama;
    string nim;
    DetailAlamat alamat;
};

int main() {
    // Membuat object struct dalam array
    Mahasiswa mhs[2];

    for (int i = 0; i < 2; i++) {
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cout << "Masukan nim = ";
        cin >> mhs[i].nim;
        cin.ignore(); // Membersihkan newline dari buffer

        cout << "Masukan nama = ";
        getline(cin, mhs[i].nama);

        cout << "Masukan kota = ";
        getline(cin, mhs[i].alamat.kota);

        cout << "Masukan provinsi = ";
        getline(cin, mhs[i].alamat.provinsi);
        cin.ignore(); // Membersihkan newline dari buffer
    }
