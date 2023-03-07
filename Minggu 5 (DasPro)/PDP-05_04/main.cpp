#include <iostream>
/*
Muhammad Yunus Saifullah - A11.2022.14341
Dasar Pemrograman kelas 4108
*/
using namespace std;

int main()
{
    //KAMUS
    float ipk;

    //ALGORITMA
    cout << "Masukkan IPK kalian = ";
    cin >> ipk;

    if(ipk >= 3.5){
        cout << "Dengan Pujian/Cumlaude" << endl;
    }else if(ipk >= 3.0 && ipk < 3.5){
        cout << "Sangat Memuaskan/Very Good" << endl;
    }else if(ipk >= 2.75 && ipk < 3.0){
        cout << "Memuaskan/Good" << endl;
    }
    return 0;
}
