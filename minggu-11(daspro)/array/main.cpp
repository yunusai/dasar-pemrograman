#include <iostream>

using namespace std;

int main()
{
    int angka [6] = {1, 2, 3, 4, 5 ,6}, indexMin[50], indexMax[50];//penulisan array: tipeVariabel namaVariabel [jumlahArray] = {nilai-nilai di Array}
    //Penomoran array dimulai dari 0 dibaca dari kiri
    float f[10];
    string bahasa[10];
    bahasa[0] = "Indonesia";
    bahasa[1] = "Inggris";
    bahasa[2] = "Jawa";

    cout<<"Before index change: " << angka[4]<<endl;//Cara pemanggilan bekerja seperti ini: namaVariable[nomorArray]
    angka[3]=11;
    cout <<"After index change: " << angka [3]<<endl;

    for(int i=0; i<3; i++){
        cout<<i+1<<"."<<bahasa[i]<<endl;
    }

    //Array tetapi dengna nilai inputan = ketika run
    string nama[50];
    float nilai[50];
    float jumlahNilai=0, rata2;
    int jumlah, nilaimaks=0, nilaimin=1000;
    //Input
    cout<<"Jumlah Mahasiswa = ";
    cin >> jumlah;
    for(int i=0; i<jumlah;i++){
        cout<<"Nama Mahasiswa ke-"<<i+1<<" = ";
        cin>>nama[i];
        cout<<"Nilai Mahasiswa "<<nama[i]<<" = ";
        cin>>nilai[i];
        jumlahNilai += nilai[i];
    }
 /*
    for(int i=0; i<jumlah;i++){
        if(i<(jumlah-1)){
          cout << "Nilai dari "<<nama[i]<<" = "<<nilai[i]<<",\n";
        }else{
        cout << "Nilai dari "<<nama[i]<<" = "<<nilai[i]<<".\n";
        }
    }

    cout<<"\nTotal Nilai Semua Mahasiswa= "<<jumlahNilai<<endl;
    rata2=jumlahNilai/jumlah;
    cout<<"Rata-rata Nilai Semua Mahasiswa= "<<rata2<<endl;
    cout<<"========================="<<endl;
    cout<<"|No\t|Nama\t|Nilai\t|"<<endl;
    cout<<"========================="<<endl;
    for(int i=0; i<jumlah; i++){
        cout<< "|" << i+1 << "\t|" << nama[i] << "\t|" << nilai[i] << "\t|" <<endl;
    }
    cout<<"========================="<<endl;
*/
    //Nilai Maksimal
    int x=0, y=0;
    for(int i=0; i<jumlah;i++){
        if(nilaimaks<=nilai[i]){
          nilaimaks=nilai[i];
          indexMax[x] = i;
          x++;
        }else if(nilaimin>=nilai[i]){
            nilaimin=nilai[i];
            indexMin[y] = i;
            y++;
        }
    }

    int jumlahMaks=0, jumlahMin=0;
    for(int j=0; j<jumlah; j++){
            if(nilai[j] == nilaimaks){
                jumlahMaks++;
            }
        }
    for(int j=0; j<jumlah; j++){
            if(nilai[j] == nilaimin){
                jumlahMin++;
            }
        }


    cout<<"Nilai Maksimal = "<<nilaimaks<< " dimiliki oleh ";
    for(int i=0; i<jumlah; i++){
        if(nilai[indexMax[i]] == nilaimaks){
            if((i<=(jumlahMaks-2)) || (i == 0)){
                cout<<nama[indexMax[i]]<< ", ";
            }
            else{
            cout<< "dan " <<nama[indexMax[i]]<< endl;
            break;
        }
        }
    }


    cout<<"Nilai Minimal = "<<nilaimin<<" dimiliki oleh ";
    for(int i=0; i<jumlah; i++){
        if(nilai[indexMin[i]] == nilaimin){
            if((i<=jumlahMin-2) || (i == 0)){
                cout<<nama[indexMin[i]]<< ", ";
            }
            else{
            cout<< "dan " <<nama[indexMin[i]]<< endl;
            break;
        }
        }

    }

    return 0;
}
