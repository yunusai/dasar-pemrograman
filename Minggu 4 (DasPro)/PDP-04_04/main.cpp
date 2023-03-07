#include <iostream>
#include <cstdlib>

using namespace std;

/*
Muhammad Yunus Saifullah -  A11.2022.14341
Dasar Pemrograman
Senin, 26 September 2022
*/

int main()
{
    float p, l, luas;

    cout << "Panjang Persegi Panjang = ";
    cin >> p;

    cout << "Lebar Persegi Panjang = ";
    cin >> l;

    luas = p * l;

    if (p == l){
        cout << "ini adalah Persegi, Luasnya "<< luas << endl;
    }
    else {
        cout << "ini adalah Persegi Panjang, Luasnya "<< luas << endl;
    }

    return 0;
}
