#include <iostream>
/*
Muhammad Yunus Saifullah (A11.2022.14341)
Selasa, 13 September 2022
Nama Dosen = Bu Nurul Anisa Sri Winarsih (Bu Nurul)\
*/
using namespace std;

int main()
{
    float vt, v0, t, a;//deklarasi variabel

    vt = 21.55;//deklarasi nilai kecepatan akhir
    t = 12.5;//deklarasi nilai waktu yang dialami
    v0 = 0;//deklarasi nilai kecepatan awal

    a = (vt-v0) / t;//perintah untuk menghitung percepatan mobil mawar

    //perintah untuk menampilkan hasil
    cout<<"Mawar yang sedang kebut kebutan mencapai kecepatan "<<vt<<" m/s dalam "<<t<<"sekon\n";
    cout<<"sehingga dapat dihitung bahwa mawar sedang mengalami percepatan sebesar "<<a<<"m/s^2";

    return 0;
}
