#include <iostream>

using namespace std;

int main()
{
    int n = 1, b, k, kol, bar;

    cout << "Matriks Angka" << endl;
    for(b=0; b<3; b++){
        for(k=0; k<3; k++){
            cout << n << "\t";
            n++;
        }
        cout << endl;
    }

    cout << "Masukan Kolom = ";
    cin >> kol;
    cout << "Masukan Baris = ";
    cin >> bar;

    for(b=0; b<bar; b++){
        for(k=0; k<kol; k++){
            cout << n << "\t";
            n++;
        }
        cout << endl;
    }

    cout << "Matriks Segitiga" << endl;

    for(int i=0; i<bar; i++){
        for(int j=0; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }

     cout << "Matriks Segitiga Terbalik" << endl;

    for(int i=0; i<bar; i++){
        for(int j=i; j<bar; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
