#include <iostream>

using namespace std;

int main()
{
    int saldo_awal, pengeluaran1 = 0, pengeluaran2 = 0, sisa_saldo;


    cout << "Masukkan Saldo bulan ini = ";
    cin >> saldo_awal;

    while(pengeluaran1 <= saldo_awal){
    cout << "Masukkan Pengeluaran Hari ini (Isikan -1 untuk Keluar) = ";
    cin >> pengeluaran1;

    if(pengeluaran1 == -1){
        break;
    }

    if((pengeluaran2+pengeluaran1) <= saldo_awal){
        pengeluaran2 += pengeluaran1;
        pengeluaran1 = pengeluaran2;
    }else{
        cout << "Saldo Tidak Cukup" << endl;
        break;
    }
    }

    sisa_saldo = saldo_awal - pengeluaran2;
    cout << "Sisa Saldo = " << sisa_saldo <<endl;

    return 0;
}
