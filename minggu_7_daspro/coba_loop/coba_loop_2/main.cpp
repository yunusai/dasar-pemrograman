#include <iostream>

using namespace std;

int main()
{
    int bilangan, h, s, g;

    cout << "Masukkan Bilangan = ";
    cin >> bilangan;

    h = bilangan;

    for(h; h<400; h+=30){
        cout<<h<<endl;
        };
    s = bilangan;

    do{
        cout << "Sekarang Bilangan ke " << s << endl;
        s++;
    }while(s < 100);

    g = bilangan;

    while(g < 100){
        cout << "Bilangan ke 10 dari Bilangan sebelumnya tetapi sebelum 100 adalah " << g <<endl;
        g += 10;
    };

    return 0;
}
