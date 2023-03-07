#include <iostream>

using namespace std;

int main()
{
     string msg[50][2], message;
     int banyak;

     cin>>banyak;
     cin.ignore();
     for(int i=0; i<banyak;     i++ ){
        for(int j=0; j<2; j++){
            cout << "Masukan Pesan: ";
            getline(cin, message);
            msg[i][j]=message;
        }
        cout<<endl;
     }

    for(int i=0; i<banyak;i++ ){
        for(int j=0; j<2; j++){
            cout << msg[i][j]<<endl;
        }
        cout<<endl;
     }

    return 0;
}
