#include <iostream>

using namespace std;

int main()
{
    int umur, pendapatan, biayaHidup, tanggungan;
    char statusKerja, statusSekolah;


    cout << "Masukkan Umur ";
    cin >> umur;

    if(umur >=18){
        cout << "Masukkan Status Bekerja ";
        cin >> statusKerja;
        if(statusKerja == 'Y'){
            cout << "Masukkan Pendapatan perbulan = ";
            cin >> pendapatan;
            cout << "Masukkan Jumlah Tanggungan = ";
            cin >> tanggungan;

            biayaHidup = pendapatan/tanggungan;
            if(biayaHidup < 300000)
                cout <<"Penduduk Miskin";
            else{
            cout << "Bukan Penduduk Miskin";}
        }
        else{
            cout <<"Penduduk Miskin";
        }
    }else{
    cout <<"Apakah Masih Sekolah? ";
    cin >> statusSekolah;

    if(statusSekolah == 'Y')
        cout << "Bukan Penduduk Miskin";
    else {
        cout << "Penduduk Miskin";}
    }
    return 0;
}
