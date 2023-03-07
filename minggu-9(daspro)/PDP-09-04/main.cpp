#include <iostream>

using namespace std;

int main()
{
    int bil, kondisi;
    bool prima = true;

    cout << "Masukan Bilangan = ";
    cin >> bil;

    kondisi = 2;

    while(kondisi <= bil/2)
    {
        if ((bil%kondisi == 0) || (bil==0) || (bil==1) ){
            prima = false;
            break;}
        kondisi++;
    }

    if(prima)
        {
        cout << "Bilangan Prima\n";
        }
        else
        {
        cout << "Bukan Bilangan Prima\n";
        }
    return 0;
}
