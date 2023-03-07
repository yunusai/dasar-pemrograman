#include <iostream>

using namespace std;

/*
Muhammad Yunus Saifullah -  A11.2022.14341
Dasar Pemrograman
Senin, 26 September 2022
*/

int main()
{
    int p, l, luas;
    float hasil_bagi;
    string janji;

    cout << "Panjang Tanah = ";
    cin >> p;

    cout << "Lebar Tanah = ";
    cin >> l;

    luas = p * l;

    cout << "Luas Tanah Pak Eko adalah sebesar " << luas << endl;

    cout << "Pak Soni dan Pak Joni Berpendapat bahwa Mereka  ";
    cin >> janji;

    if (janji == "Setuju"){
        hasil_bagi = luas / 2;
        cout << "Bagian Pak Joni = "<< hasil_bagi << endl;
        cout << "Bagian Pak soni = "<< hasil_bagi << endl;
    }
    else{
        cout << "Luas Tanah yang tidak terjual = "<< luas << endl;
    }

    return 0;
}
