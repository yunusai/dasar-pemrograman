#include <iostream>
/*
Muhammad Yunus Saifullah (A11.2022.14341)
Sistem Rekap Nilai Mahasiswa
*/
using namespace std;

int main()
{
    string nim[50], nama[50];
    float nilai [50][4];
    int mhs, pil;
    char lanjut;
    float tamNil, nilaiMax=0, nilaiMin=100, nilaiSum=0, nilaiRata;
    int iMax, iMin;

    cout<<"Masukkan banyak mahasiswa = ";
    cin>> mhs;
    cout<<endl;

    for(int i=0; i<mhs; i++){
        cout << "Mahasiswa ke-" << i+1 <<endl;
        cout << "Masukkan NIM (tanpa spasi) = ";
        cin >> nim[i];
        cout << "Masukkan nama (tanpa spasi) = ";
        cin >> nama[i];
        cout<<endl;

        for(int j=0; j<3; j++){
            if(j==0){
                cout<<"Masukkan nilai UTS = ";
            }
            else if(j==1){
                cout<<"Masukkan nilai UAS = ";
            }
            else{
                cout<<"Masukkan nilai tugas = ";
            }
            cin >> nilai[i][j];

            if(nilai[i][j]<0 || nilai[i][j]>100){
              cout<<"Masukkan lagi nilai antara 0 dan 100 = ";
              cin >> nilai[i][j];
            }
        }
        nilai[i][3]=(nilai[i][0]*0.3)+(nilai[i][1]*0.3)+(nilai[i][2]*0.4);
        cout<<"Nilai total = "<<nilai[i][3]<<endl<<endl;
    }

    //Cetak
    cout<<"| No\t| NIM\t| Nama\t| UTS\t| UAS\t| Tugas\t| Total\t|"<<endl;
    for(int i=0; i<mhs; i++){
        cout<<"| "<< i+1<<"\t| "<<nim[i]<<"\t| "<<nama[i]<<"\t| ";
        for(int j=0; j<4; j++){
            cout<< nilai[i][j]<<"\t| ";
        }
        cout<<endl;
    }

    //Pilihan
    do{
        cout<<"\nPilihan:\n1.Tambah Nilai\n2.Analisa Data\nMasukkan Pilihan = ";
        cin>>pil;

        if(pil==1){
            cout<<"\n--Tambah nilai--\nMasukkan nilai yang ingin ditambah = ";
            cin>>tamNil;
            for(int i=0; i<mhs; i++){
                for(int j=0; j<3; j++){
                    nilai[i][j]=nilai[i][j]+tamNil>100?100:nilai[i][j]+tamNil;
                }
                nilai[i][3]=(nilai[i][0]*0.3)+(nilai[i][1]*0.3)+(nilai[i][2]*0.4);
            }
            cout<<"| No\t| NIM\t| Nama\t| UTS\t| UAS\t| Tugas\t| Total\t|"<<endl;
            for(int i=0; i<mhs; i++){
                cout<<"| "<< i+1<<"\t| "<<nim[i]<<"\t| "<<nama[i]<<"\t| ";
                for(int j=0; j<4; j++){
                    cout<< nilai[i][j]<<"\t| ";
                }
            cout<<endl;
            }
        }
        else if(pil==2){
            for(int i=0; i<mhs; i++){
                for(int j=0; j<3; j++){
                    if(nilai[i][3]>nilaiMax){
                        nilaiMax=nilai[i][3];
                        iMax=i;
                        }
                    else if(nilai[i][3]<nilaiMin){
                        nilaiMin=nilai[i][3];
                        iMin=i;
                        }
                    }
                    nilaiSum+=nilai[i][3];
                }
            cout<<"\n--Analisa Data berdasarkan nilai akhir--\n";
            cout<<"Nilai Max = " << nilaiMax<<" diperoleh mahasiswa " <<nama[iMax]<<" dengan NIM "<<nim[iMax]<<endl;
            cout<<"Nilai Min = " << nilaiMin<<" diperoleh mahasiswa " <<nama[iMin]<<" dengan NIM "<<nim[iMin]<<endl;
            nilaiRata=nilaiSum/mhs;
            cout<<"Nilai rata-rata = " <<nilaiRata<<endl;
        }
        else{
            cout<<"Pilihan anda salah"<<endl;
        }
        cout<<"\nIngin melanjutkan?(y/n) = ";
        cin>>lanjut;
    }while(lanjut == 'y');

    return 0;
}
