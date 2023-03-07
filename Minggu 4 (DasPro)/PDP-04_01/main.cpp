#include <iostream>

using namespace std;

/*
Muhammad Yunus Saifullah -  A11.2022.14341
Dasar Pemrograman
Senin, 26 September 2022
*/

int main()
{
    int n;

    cout << "Masukkan Bilangan n = ";
    cin >> n;

    if(n > 12){
        cout << "Bilangan "<< n <<" lebih besar dari 12";
    }
    else{
        cout << "Bilangan "<< n <<" lebih kecil dari 12";
    }

    return 0;
}
