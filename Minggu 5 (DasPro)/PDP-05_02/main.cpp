#include <iostream>
/*
Muhammad Yunus Saifullah - A11.2022.14341
Dasar Pemrograman kelas 4108
*/
using namespace std;

int main()
{
    int tahun, harga_tambah;
    cout << "Masukkan tahun perilisan motor anda = ";
    cin >> tahun;

    if(tahun < 2020){
        harga_tambah = (2020 - tahun)* 2000000;
        cout << "Uang tambahan yang anda perlukan = Rp. " << harga_tambah << endl;
    }else{
        cout << "Motor ini sudah tahun 2020 atau dari masa depan" << endl;
    }
    return 0;
}
