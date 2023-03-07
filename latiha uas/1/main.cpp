#include <iostream>

using namespace std;

int main()
{
    int batasawal, batasakhir, batas, k;

    cout << "masukan batas awal =";
    cin >>batasawal;
    cout << "masukan batas akhir =";
    cin >>batasakhir;

    batas = batasakhir-batasawal;
    k=batasawal+1;

    for(int i =0; i<batas; i++){
        if(k%4 == 0 || k%6 == 0){
            cout<<endl;
        }else{
            if(k%2 == 0){
                cout<< k << " Genap\n";
            }else if(k%2 == 1){
                cout<< k << " Ganjil\n";
            }
        }
        k++;
    }

    return 0;
}
