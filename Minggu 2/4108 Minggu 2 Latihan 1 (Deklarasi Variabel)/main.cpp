#include <iostream>

/*
Muhammad Yunus Saifullah -  A11.2022.14341
Senin, 12 Sepetember 2022 - D.2.G
Variabel
*/

using namespace std;

int main()
{
    //Variabel
    int umur, umr;//int = variabel, umur = nama/identitas variabel
    int u;//pendeklarasian dapat dilakukan berurutan atau sendiri sendiri, integer adalah deklarasi variabel untuk bilangan bulat
    float tinggi; //deklarasi untuk variabel bilangan real
    char ukurbaju;//deklarasi untuk 1 huruf (huruf), dan hanya satu huruf saja
    string nama; //deklarasi untuk kalimat (lebih dari satu huruf)

    //cara pendeklarasian variabe mutlak(Sudah ditentukan dari awal), tidak bisa diganti kecuali dari kode program
    umur = 18;
    u = umur = umr;//contoh kalau bisa deklarasi variabel lain, pengoperan nilai
    tinggi = 182.575757;//3 angka dibelakang koma, selebihnya dibulatkan(variabel float)
    nama = "Muhammad Yunus Saifullah";//deklarasi string memakai petik 2
    ukurbaju = 'X';//deklarasi char memakai petik satu

    //Perintah untuk output menggunakan vvariabel yang sudah di input di program
    cout << "Nama saya "<<nama<<endl;
    cout<<"Umur saya "<<u<<" tahun dengan tinggi "<<tinggi<<" cm"<<endl;
    cout<<"Ukuran baju saya "<<ukurbaju<<endl;

    // cara membuat perintah untuk input data
    cout<<"\nMasukkan Nama (tanpa spasi): "; //input ini tidak bisa menggunakan spasi, ada cara lain untuk yang biss apasi
    cin>>nama;
    cout<<"Masukkan Umur: ";
    cin>>u;
    cout<<"Masukkan tinggi: ";
    cin>>tinggi;
    cout<<"Masukkan Ukuran Baju (1 huruf): ";//karena memakai dklarasi char
    cin>>ukurbaju;

    //cara menggunakan data yang sudah dijadikan input menjadi output
    cout<<"\nNama saya "<<nama<<endl;
    cout<<"Umur saya "<<u<<" tahun dengan tinggi "<<tinggi<<" cm"<<endl;
    cout<<"Ukuran baju saya "<<ukurbaju<<endl;

    /*Pak Rangga punya tanah 1 hektar
    2,5 juta tiap meter persegi
    input panjang, lebar
    output kalimat
    tanah panjang xx m lebar xx m dengan
    luas xx m2 harganya rp xxxxxxx*/

    float panjang, lebar, luas;
    int harga;//bisa error karena seharusnya menggunakan variabel long integer

    cout<<"\nSistem Penghitung Harga Tanah\n"<<endl;

    cout<<"Masukkan Panjang: ";
    cin>>panjang;
    cout<<"Masukkan Lebar: ";
    cin>>lebar;

    luas = panjang * lebar;//hitung luas
    harga = luas * 2500000;//hitung harga

    cout<<"Tanah dengan panjang "<<panjang<<" m dan lebar "<<lebar<<" m mempunyai harga tanah sebesar Rp "<<harga<<",00"<<endl;

    return 0;
}
