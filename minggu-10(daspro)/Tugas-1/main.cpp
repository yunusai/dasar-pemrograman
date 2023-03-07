#include <iostream>

using namespace std;

int main()
{
    int bar, kol, x;
    cout << "Masukan Baris = ";
    cin >> bar;

    for(int i=1; i<=bar; i++){
        if(i<=1 || i == bar){
            for(int j=1; j<=bar; j++){
                cout << i << "\t";
        }
        }else{
            for(int j=1; j<=bar; j++){
                if((j >= 2) && (j < bar)){
                cout << "\t";
                }else{
                cout << i << "\t";
                }
            }
    }
        cout << endl;
        cout << endl;
}

for(int i=0; i<bar; i++){
        x = 1;
        for(int j=i; j<bar; j++){
            if(x%2==1){
                cout << 1;
            }else if(x%2==0){
                cout << 0;
            }
        x++;

        }
        cout << endl;
    }
    return 0;
}
