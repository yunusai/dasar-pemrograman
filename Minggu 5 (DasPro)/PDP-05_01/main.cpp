#include <iostream>
/*
Muhammad Yunus Saifullah - A11.2022.14341
Dasar Pemrograman kelas 4108
*/
using namespace std;

int main()
{
    int nim;

    cout << "Masukkan NIM = ";
    cin >> nim;

    nim = nim%2;

    if(nim == 0){
        cout << "Kamu mengambil ujian tipe A" << endl;
    }else{
        cout << "Kamu mengambil ujian tipe B" << endl;
    }

    return 0;
}
