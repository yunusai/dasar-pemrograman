#include <iostream>
/*
Muhammad Yunus Saifullah (A11.2022.14341)
Dasar Pemrograman 4108
Sistem Catatan Pembelian Makanan Harian
*/
using namespace std;

int main()
{
    int hargaMakan[100][4], totalTipeMakan[4]={0, 0, 0, 0}, hargaMakanAll[200];
    int total=0, hargaMaxMakan=0, hargaMinMakan=1000000, hargaMaxTipe=0, hargaMinTipe=1000000, nomor, x, k, l;
    int iMaxTipe, iMinTipe, iMaxMakan, iMinMakan, jumlah[4]={0, 0, 0, 0}, jumlahMakan, ketemu;
    string namaMakan[100][4],namaMakanAll[200], makanan, namaTipeMakan[4]={"pagi", "siang", "malam", "cemilan"}, cari;
    char lanjut, pil;

    /*
    Nomor Array
    Makan Pagi: 0
    Makan Siang: 1
    Makan Malam: 2
    Snack: 3
    */

    //Judul
    cout<<"CATATAN PENGELUARAN MAKANAN HARI INI\n----------------------------------------\n\n";

    //Mencatat Makan Pagi
    cout<<"Apakah kamu makan pagi?(y/n) = ";
    cin>>lanjut;
    cin.ignore();
    cout<<endl;
    if(lanjut == 'y'){
        cout <<"Makan Pagi"<<endl<<"----------"<<endl<<endl;
        nomor=1;
        x=0;
    do{
        cout<<"Makanan ke-"<<nomor<<endl;
        cout<<"Masukkan Nama Makanan = ";
        getline(cin, makanan);
        namaMakan[x][0]=makanan;
        namaMakanAll[k]=namaMakan[x][0];
        cout<<"Masukkan Harga Makanan = ";
        cin>>hargaMakan[x][0];
        hargaMakanAll[k]=hargaMakan[x][0];
        totalTipeMakan[0]+= hargaMakan[x][0];
        nomor++;
        x++;
        jumlah[0]++;
        k++;
        cout<<endl<<"Tambah Makanan?(y/n) = ";
        cin>>lanjut;
        cin.ignore();
        cout<<endl;
    }while(lanjut == 'y');
    }else{
        totalTipeMakan[0] = 0;
    }

    //Mencatat Makan Siang
    cout<<"Apakah kamu makan siang?(y/n) = ";
    cin>>lanjut;
    cin.ignore();
    cout<<endl;
    if(lanjut == 'y'){
        cout <<"Makan Siang"<<endl<<"----------"<<endl<<endl;
        nomor=1;
        x=0;
    do{
        cout<<"Makanan ke-"<<nomor<<endl;
        cout<<"Masukkan Nama Makanan = ";
        getline(cin, makanan);
        namaMakan[x][1]=makanan;
        namaMakanAll[k]=namaMakan[x][1];
        cout<<"Masukkan Harga Makanan = ";
        cin>>hargaMakan[x][1];
        hargaMakanAll[k]=hargaMakan[x][1];
        totalTipeMakan[1]+= hargaMakan[x][1];
        nomor++;
        x++;
        k++;
        jumlah[1]++;
        cout<<endl<<"Tambah Makanan?(y/n) = ";
        cin>>lanjut;
        cin.ignore();
        cout<<endl;
    }while(lanjut == 'y');
    }else{
        totalTipeMakan[1] = 0;
    }

    //Mencatat Makan Malam
    cout<<"Apakah kamu makan malam?(y/n) = ";
    cin>>lanjut;
    cin.ignore();
    cout<<endl;
    if(lanjut == 'y'){
        cout <<"Makan Malam"<<endl<<"----------"<<endl<<endl;
        nomor=1;
        x=0;
    do{
        cout<<"Makanan ke-"<<nomor<<endl;
        cout<<"Masukkan Nama Makanan = ";
        getline(cin, makanan);
        namaMakan[x][2]=makanan;
        namaMakanAll[k]=namaMakan[x][2];
        cout<<"Masukkan Harga Makanan = ";
        cin>>hargaMakan[x][2];
        hargaMakanAll[k]=hargaMakan[x][2];
        totalTipeMakan[2]+= hargaMakan[x][2];
        nomor++;
        x++;
        k++;
        jumlah[2]++;
        cout<<endl<<"Tambah Makanan?(y/n) = ";
        cin>>lanjut;
        cin.ignore();
        cout<<endl;
    }while(lanjut == 'y');
    }else{
        totalTipeMakan[2] = 0;
    }

    //Mencatat Cemilan
    cout<<"Apakah kamu hari ini memakan cemilan?(y/n) = ";
    cin>>lanjut;
    cin.ignore();
    cout<<endl;
    if(lanjut == 'y'){
        cout <<"Cemilan"<<endl<<"----------"<<endl<<endl;
        nomor=1;
        x=0;
    do{
        cout<<"Makanan ke-"<<nomor<<endl;
        cout<<"Masukkan Nama Cemilan = ";
        getline(cin, makanan);
        namaMakan[x][3]=makanan;
        namaMakanAll[k]=namaMakan[x][3];
        cout<<"Masukkan Harga Cemilan = ";
        cin>>hargaMakan[x][3];
        hargaMakanAll[k]=hargaMakan[x][3];
        totalTipeMakan[3]+= hargaMakan[x][3];
        nomor++;
        x++;
        k++;
        jumlah[3]++;
        cout<<endl<<"Tambah Cemilan?(y/n) = ";
        cin>>lanjut;
        cin.ignore();
        cout<<endl;
    }while(lanjut == 'y');
    }else{
        totalTipeMakan[3] = 0;
    }

    //Membersihkan layar
    system("cls");

    //Mencetak Catatan
    cout<< "Catatan Makanan Kamu Hari ini\n----------------------------\n\n";
    jumlahMakan = jumlah[0]+jumlah[1]+jumlah[2]+jumlah[3];

    //Mencetak Makan Pagi
    if(jumlah[0]==0){
        cout<<"-->Kamu tidak makan pagi hari ini<--"<<endl<<endl;
    }else{
    cout<<"Makan Pagi\n--------------\n\n";
    for(int i=0; i<jumlah[0]; i++){
        cout<<namaMakan[i][0]<<" = "<<hargaMakan[i][0]<<endl;
    }
    cout<<"---------------------------------------------- +"<<endl;
        cout<<"Total harga makan pagi = "<<totalTipeMakan[0]<<endl<<endl;
    }

    //Mencetak Makan Siang
    if(jumlah[1]==0){
        cout<<"-->Kamu tidak makan siang hari ini<--"<<endl<<endl;
    }else{
    cout<<"Makan Siang\n--------------\n\n";
    for(int i=0; i<jumlah[1]; i++){
        cout<<namaMakan[i][1]<<" = "<<hargaMakan[i][1]<<endl;
    }
    cout<<"---------------------------------------------- +"<<endl;
        cout<<"Total harga makan siang = "<<totalTipeMakan[1]<<endl<<endl;
    }

    //Mencetak Makan Malam
    if(jumlah[2]==0){
        cout<<"-->Kamu tidak makan malam hari ini<--"<<endl<<endl;
    }else{
    cout<<"Makan Malam\n--------------\n\n";
    for(int i=0; i<jumlah[2]; i++){
        cout<<namaMakan[i][2]<<" = "<<hargaMakan[i][2]<<endl;
    }
    cout<<"---------------------------------------------- +"<<endl;
        cout<<"Total harga makan malam = "<<totalTipeMakan[2]<<endl<<endl;
    }

    //Mencetak Cemilan
    if(jumlah[3]==0){
        cout<<"-->Kamu tidak makan cemilan hari ini<--"<<endl<<endl;
    }else{
    cout<<"Cemilan\n--------------\n\n";
    for(int i=0; i<jumlah[3]; i++){
        cout<<namaMakan[i][3]<<" = "<<hargaMakan[i][3]<<endl;
    }
    cout<<"---------------------------------------------- +"<<endl;
        cout<<"Total harga cemilan = "<<totalTipeMakan[3]<<endl<<endl;
    }

    total = totalTipeMakan[0]+totalTipeMakan[1]+totalTipeMakan[2]+totalTipeMakan[3];
    cout<<"---------------------------------- +\nTotal pengeluaran hari ini = "<< total <<endl<<endl;

    //Menu Lanjutan
    do{
    cout<<"Menu Lanjutan:\n1. Tambah Makanan\n2. Analisa Data\n3. Mencari Harga Makanan\n4. Keluar"<<endl;
    cout<<"Mau Lanjut ke Menu Apa?(1/2/3/4) = ";
    cin>>pil;

    //Jika Inputan Salah
    if(!((pil == '1') ^ (pil == '2') ^ (pil == '3') ^ (pil == '4'))){
        do{
            cout<<"\nMenu hanya disediakan 4 saja. Tolong masukkan nomor menu(1/2/3/4) = ";
            cin>>pil;
        }while(!((pil == '1') ^ (pil == '2') ^ (pil == '3') ^ (pil == '4')));
    }

    //Tambah Makanan(Pilihan 1)
    if(pil == '1'){
        system("cls");
        cout<<"Tipe makan:\n1. Makan Pagi\n2. Makan Siang\n3. Makan Malam\n4. Cemilan"<<endl;
        cout<<"Pilih tipe makan yang ingin kamu tambah(1/2/3/4) = ";
        cin>>pil;
        cin.ignore();

        //Jika Inputan Salah
        if(!((pil == '1') ^ (pil == '2') ^ (pil == '3') ^ (pil == '4'))){
            do{
            cout<<"\nMaaf, tipe makanan yang disediakan hanya 4 saja. Tolong masukkan nomor tipe makan(1/2/3/4) = ";
            cin>>pil;
            cin.ignore();
            }while(!((pil == '1') ^ (pil == '2') ^ (pil == '3') ^ (pil == '4')));
            }

        if(pil == '1'){
            cout <<"\n\nTambahan Makan Pagi"<<endl<<"-----------------"<<endl<<endl;
            nomor=1;
            x=0;
            do{
                if(jumlah[0] < 1){
                    cout<<"Masukkan Nama Makanan = ";
                    getline(cin, makanan);
                    namaMakan[x][0]=makanan;
                    namaMakanAll[k]=namaMakan[x][0];
                    cout<<"Masukkan Harga Makanan = ";
                    cin>>hargaMakan[x][0];
                    hargaMakanAll[k]=hargaMakan[x][0];
                    totalTipeMakan[0]+= hargaMakan[x][0];
                    nomor++;
                    k++;
                    jumlah[0]++;
                    cout<<endl<<"Tambah Makanan?(y/n) = ";
                    cin>>lanjut;
                    cin.ignore();
                    cout<<endl;
                }else{
                    x=jumlah[0];
                    cout<<"Masukkan Nama Makanan = ";
                    getline(cin, makanan);
                    namaMakan[x][0]=makanan;
                    namaMakanAll[k]=namaMakan[x][0];
                    cout<<"Masukkan Harga Makanan = ";
                    cin>>hargaMakan[x][0];
                    hargaMakanAll[k]=hargaMakan[x][0];
                    totalTipeMakan[0]+= hargaMakan[jumlah[0]][0];
                    nomor++;
                    k++;
                    jumlah[0]++;
                    cout<<endl<<"Tambah Makanan?(y/n) = ";
                    cin>>lanjut;
                    cin.ignore();
                    cout<<endl;
                }
            }while(lanjut == 'y');
        }else if(pil == '2'){
            cout <<"\n\nTambahan Makan Siang"<<endl<<"-----------------"<<endl<<endl;
            nomor=1;
            x=0;
            do{
                if(jumlah[1] < 1){
                    cout<<"Masukkan Nama Makanan = ";
                    getline(cin, makanan);
                    namaMakan[x][1]=makanan;
                    namaMakanAll[k]=namaMakan[x][1];
                    cout<<"Masukkan Harga Makanan = ";
                    cin>>hargaMakan[x][1];
                    hargaMakanAll[k]=hargaMakan[x][1];
                    totalTipeMakan[1]+= hargaMakan[x][1];
                    nomor++;
                    k++;
                    jumlah[1]++;
                    cout<<endl<<"Tambah Makanan?(y/n) = ";
                    cin>>lanjut;
                    cin.ignore();
                    cout<<endl;
                }else{
                    x=jumlah[1];
                    cout<<"Masukkan Nama Makanan = ";
                    getline(cin, makanan);
                    namaMakan[x][1]=makanan;
                    namaMakanAll[k]=namaMakan[x][1];
                    cout<<"Masukkan Harga Makanan = ";
                    cin>>hargaMakan[x][1];
                    hargaMakanAll[k]=hargaMakan[x][1];
                    totalTipeMakan[1]+= hargaMakan[jumlah[1]][1];
                    nomor++;
                    k++;
                    jumlah[1]++;
                    cout<<endl<<"Tambah Makanan?(y/n) = ";
                    cin>>lanjut;
                    cin.ignore();
                    cout<<endl;
                }
            }while(lanjut == 'y');
        }else if(pil == '3'){
            cout <<"\n\nTambahan Makan Malam"<<endl<<"-----------------"<<endl<<endl;
            nomor=1;
            x=0;
            do{
                if(jumlah[2] < 1){
                    cout<<"Masukkan Nama Makanan = ";
                    getline(cin, makanan);
                    namaMakan[x][2]=makanan;
                    namaMakanAll[k]=namaMakan[x][2];
                    cout<<"Masukkan Harga Makanan = ";
                    cin>>hargaMakan[x][2];
                    hargaMakanAll[k]=hargaMakan[x][2];
                    totalTipeMakan[2]+= hargaMakan[x][2];
                    nomor++;
                    k++;
                    jumlah[2]++;
                    cout<<endl<<"Tambah Makanan?(y/n) = ";
                    cin>>lanjut;
                    cin.ignore();
                    cout<<endl;
                }else{
                    x=jumlah[2];
                    cout<<"Masukkan Nama Makanan = ";
                    getline(cin, makanan);
                    namaMakan[x][2]=makanan;
                    namaMakanAll[k]=namaMakan[x][2];
                    cout<<"Masukkan Harga Makanan = ";
                    cin>>hargaMakan[x][2];
                    hargaMakanAll[k]=hargaMakan[x][2];
                    totalTipeMakan[2]+= hargaMakan[x][2];
                    nomor++;
                    k++;
                    jumlah[2]++;
                    cout<<endl<<"Tambah Makanan?(y/n) = ";
                    cin>>lanjut;
                    cin.ignore();
                    cout<<endl;
                }
            }while(lanjut == 'y');
        }else if(pil == '4'){
            cout <<"\n\nTambahan Cemilan"<<endl<<"-----------------"<<endl<<endl;
            nomor=1;
            x=0;
            do{
                if(jumlah[3] < 1){
                    cout<<"Masukkan Nama Camilan = ";
                    getline(cin, makanan);
                    namaMakan[x][3]=makanan;
                    namaMakanAll[k]=namaMakan[x][3];
                    cout<<"Masukkan Harga Camilan = ";
                    cin>>hargaMakan[x][3];
                    hargaMakanAll[k]=hargaMakan[x][3];
                    totalTipeMakan[3]+= hargaMakan[x][3];
                    nomor++;
                    k++;
                    jumlah[3]++;
                    cout<<endl<<"Tambah Camilan?(y/n) = ";
                    cin>>lanjut;
                    cin.ignore();
                    cout<<endl;
                }else{
                    x=jumlah[3];
                    cout<<"Masukkan Nama Camilan = ";
                    getline(cin, makanan);
                    namaMakan[x][3]=makanan;
                    namaMakanAll[k]=namaMakan[x][3];
                    cout<<"Masukkan Harga Camilan = ";
                    cin>>hargaMakan[x][3];
                    hargaMakanAll[k]=hargaMakan[x][3];
                    totalTipeMakan[3]+= hargaMakan[x][3];
                    nomor++;
                    k++;
                    jumlah[3]++;
                    cout<<endl<<"Tambah Camilan?(y/n) = ";
                    cin>>lanjut;
                    cin.ignore();
                    cout<<endl;
                }
            }while(lanjut == 'y');
            }
            //Membersihkan layar
            system("cls");

            //Mencetak Catatan
            cout<< "Catatan Makanan Kamu Hari ini\n----------------------------\n\n";

            //Mencetak Makan Pagi
            if(jumlah[0]==0){
                cout<<"-->Kamu tidak makan pagi hari ini<--"<<endl<<endl;
            }else{
            cout<<"Makan Pagi\n--------------\n\n";
            for(int i=0; i<jumlah[0]; i++){
                cout<<namaMakan[i][0]<<" = "<<hargaMakan[i][0]<<endl;
            }
            cout<<"---------------------------------------------- +"<<endl;
                cout<<"Total harga makan pagi = "<<totalTipeMakan[0]<<endl<<endl;
            }

            //Mencetak Makan Siang
            if(jumlah[1]==0){
                cout<<"-->Kamu tidak makan siang hari ini<--"<<endl<<endl;
            }else{
            cout<<"Makan Siang\n--------------\n\n";
            for(int i=0; i<jumlah[1]; i++){
                cout<<namaMakan[i][1]<<" = "<<hargaMakan[i][1]<<endl;
            }
            cout<<"---------------------------------------------- +"<<endl;
                cout<<"Total harga makan siang = "<<totalTipeMakan[1]<<endl<<endl;
            }

            //Mencetak Makan Malam
            if(jumlah[2]==0){
                cout<<"-->Kamu tidak makan malam hari ini<--"<<endl<<endl;
            }else{
            cout<<"Makan Malam\n--------------\n\n";
            for(int i=0; i<jumlah[2]; i++){
                cout<<namaMakan[i][2]<<" = "<<hargaMakan[i][2]<<endl;
            }
            cout<<"---------------------------------------------- +"<<endl;
                cout<<"Total harga makan malam = "<<totalTipeMakan[2]<<endl<<endl;
            }

            //Mencetak Cemilan
            if(jumlah[3]==0){
                cout<<"-->Kamu tidak makan cemilan hari ini<--"<<endl<<endl;
            }else{
            cout<<"Cemilan\n--------------\n\n";
            for(int i=0; i<jumlah[3]; i++){
                cout<<namaMakan[i][3]<<" = "<<hargaMakan[i][3]<<endl;
            }
            cout<<"---------------------------------------------- +"<<endl;
                cout<<"Total harga cemilan = "<<totalTipeMakan[3]<<endl<<endl;
            }

            total = totalTipeMakan[0]+totalTipeMakan[1]+totalTipeMakan[2]+totalTipeMakan[3];
            cout<<"---------------------------------- +\nTotal pengeluaran hari ini = "<< total <<endl<<endl;

            cout<<"Mau lanjut menggunakan aplikasi(y/n)? = ";
            cin>>lanjut;
            cin.ignore();
            cout<<endl;
    }else if(pil == '2'){
        system("cls");
        cout<<"Analisa data dari catatan makanan kamu hari ini\n---------------------------------------------\n\n";
        if(jumlahMakan<1){
            cout<<"Kamu tidak Makan hari ini"<<endl;
        }else{
        //Mencari Max Harga Tipe Makan
        for(int i=0; i<4; i++){
            if(totalTipeMakan[i]>hargaMaxTipe){
                        hargaMaxTipe=totalTipeMakan[i];
                        iMaxTipe=i;
                        }
        //Mencari Min Harga Tipe Makan
                    else if(totalTipeMakan[i]<hargaMinTipe){
                        hargaMinTipe=totalTipeMakan[i];
                        iMinTipe=i;
                        }
                    }

        //Mencari Max Harga Makanan
        for(int i=0; i<jumlahMakan; i++){
            if(hargaMakanAll[i]>hargaMaxMakan){
                        hargaMaxMakan=hargaMakanAll[i];
                        iMaxMakan=i;
                        }
        //Mencari Min Harga Makanan
                    else if(hargaMakanAll[i]<hargaMinMakan){
                        hargaMinMakan=hargaMakanAll[i];
                        iMinMakan=i;
                        }
                    }

        //Mencetak Data
        cout<<"Kamu hari ini makan sebanyak "<<jumlahMakan<<" kali"<<endl;
        cout<<"\nPengeluaran terbesar mu hari ini adalah sebesar "<<hargaMaxTipe<<" ketika makan "<<namaTipeMakan[iMaxTipe]<<endl;
        cout<<"\nPengeluaran terkecil mu hari ini adalah sebesar "<<hargaMinTipe<<" ketika makan "<<namaTipeMakan[iMinTipe]<<endl;
        cout<<"\nMakanan termahal mu hari ini adalah "<<namaMakanAll[iMaxMakan]<<" dengan harga sebesar "<<hargaMaxMakan<<endl;
        cout<<"\nMakanan termurah mu hari ini adalah "<<namaMakanAll[iMinMakan]<<" dengan harga sebesar "<<hargaMinMakan<<endl;
        }
        cout<<"\nMau lanjut menggunakan aplikasi(y/n)? = ";
        cin>>lanjut;
        cin.ignore();
        cout<<endl;
    }else if(pil == '3'){
        system("cls");
        cout<<"Fitur Mencari Harga Makan"<<endl<<endl;
        cout<<"Masukan Nama Makanan yang ingin dicari harganya (Harus Sesuai Kapitalnya,karena tolower() dan toupper tidak bisa digunakan) = ";
        cin.ignore();
        getline(cin, cari);



        cout<<endl;
        l=0;
        for(int i = 0; i<jumlahMakan; i++){
            if(namaMakanAll[i] == cari){
                ketemu = hargaMakanAll[i];
                l++;
        }
        }

        if(l == 0){
            cout<<"Tidak ketemu. tolong coba lagi";
        }else if(l > 0 ){
            cout<<"Ketemu. Makanan tersebut memiliki harga sebesar "<< ketemu <<endl<<endl;
        }

        cout<<"\nMau lanjut menggunakan aplikasi(y/n)? = ";
            cin>>lanjut;
            cin.ignore();
    }else if(pil == '4'){
        lanjut = 'n';
    }
    }while(lanjut == 'y');
    system("cls");
    cout<<"Kamu Keluar dari Aplikasi"<<endl;

    return 0;
}
