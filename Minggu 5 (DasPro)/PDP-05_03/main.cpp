#include <iostream>
/*
Muhammad Yunus Saifullah - A11.2022.14341
Dasar Pemrograman kelas 4108
*/
using namespace std;

int main()
{
    int usia;

    cout << "Masukkan usia tetangga = ";
    cin >> usia;

    if(usia <= 17){
        cout << "Diundang" << endl;
    }else{
        cout << "Tidak Diundang" << endl;
    }
    return 0;
}
