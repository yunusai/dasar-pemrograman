#include <iostream>

using namespace std;

int main()
{
    int umur, juara, hadiah;
    cout << "Masukkan Umur Anda = ";
    cin >> umur;

    cout << "Masukkan Nomor Juara Anda = ";
    cin >> juara;

    if(umur>=16 && umur <= 18){
        switch(juara){
        case 1:
            hadiah = 5000000;
            hadiah -= (hadiah*5/100);
            cout << "Kamu mendapat Uang sebanyak " << hadiah <<endl;
            break;
        case 2:
            hadiah = 4000000;
            hadiah -= (hadiah*5/100);
            cout << "Kamu mendapat Uang sebanyak " << hadiah <<endl;
            break;
        case 3:
            hadiah = 3000000;
            hadiah -= (hadiah*5/100);
            cout << "Kamu mendapat Uang sebanyak " << hadiah <<endl;
            break;
        }
    }else if(umur>=19 && umur <= 24){
        switch(juara){
        case 1:
            hadiah = 6000000;
            hadiah -= (hadiah*5/100);
            cout << "Kamu mendapat Uang sebanyak " << hadiah <<endl;
            break;
        case 2:
            hadiah = 5000000;
            hadiah -= (hadiah*5/100);
            cout << "Kamu mendapat Uang sebanyak " << hadiah <<endl;
            break;
        case 3:
            hadiah = 4000000;
            hadiah -= (hadiah*5/100);
            cout << "Kamu mendapat Uang sebanyak " << hadiah <<endl;
            break;
        }
        }else if(umur>24){
            switch(juara){
            case 1:
                hadiah = 7000000;
                hadiah -= (hadiah*5/100);
                cout << "Kamu mendapat Uang sebanyak " << hadiah <<endl;
                break;
            case 2:
                hadiah = 6000000;
                hadiah -= (hadiah*5/100);
                cout << "Kamu mendapat Uang sebanyak " << hadiah <<endl;
                break;
            case 3:
                hadiah = 5000000;
                hadiah -= (hadiah*5/100);
                cout << "Kamu mendapat Uang sebanyak " << hadiah <<endl;
                break;
        }
        }else{
         cout <<"Inputan Salah" << endl;
        }



    return 0;
}
