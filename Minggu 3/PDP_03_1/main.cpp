#include <iostream>

/*
Muhammad Yunus Saifullah -  A11.2022.14341
Kelompok 4108
*/

using namespace std;

int main()
{
    //Kamus
    float v, phi = 3.14, r, t;

    //ALgoritma
    cout << "Masukkan jari-jari(meter) = ";
    cin >> r;
    cout << "Masukkan tinggi(meter) = ";
    cin >> t;

    v = phi * r * r * t;

    cout << "Volume tabung dengan jari-jari " << r << "meter dan tinggi " << t << "meter adalah " << v << "meter kubik" <<endl;
    return 0;
}
