#include <iostream>
/*
Muhammad Yunus Saifullah - A11.2022.14341
Dasar Pemrograman kelas 4108
*/
using namespace std;

int main()
{
    //KAMUS
    int uang_bln, biaya_kos = 500000, biaya_makan = 500000, biaya_buku = 200000, biaya_tiket_biasa = 500000;
    int biaya_tiket_vip = 1000000, uang_bln_min;

    //ALGORITMA
    cout << "Bulan ini, Soni menerima uang bulanan sebanyak = ";
    cin >> uang_bln;

    uang_bln_min = biaya_makan + biaya_buku + biaya_kos;

    if ( uang_bln >= uang_bln_min && uang_bln < (uang_bln_min + biaya_tiket_biasa)){
        cout << "Soni tidak bisa menonton konser karena uang kurang\n";
    }else if(uang_bln >= (uang_bln_min + biaya_tiket_biasa) && uang_bln < (uang_bln_min + biaya_tiket_vip)){
        cout << "Soni jadi menonton konser dengan tempat duduk biasa\n";
    }else if(uang_bln >= (uang_bln_min + biaya_tiket_vip)){
        cout << "Soni jadi menonton konser dengan tempat duduk VIP\n";
    }else{
        cout << "Input tidak valid\n";
    }
    return 0;
}
