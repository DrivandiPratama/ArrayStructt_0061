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
