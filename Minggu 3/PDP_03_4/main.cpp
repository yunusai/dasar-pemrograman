#include <iostream>

/*
Muhammad Yunus Saifullah -  A11.2022.14341
Kelompok 4108
*/


using namespace std;
int main()
{
 //pdp 3 - relasional
 int n1, n2, n3, n4, n5, n6, n7;
 cout << "Cek interval 3<n1<10. Masukkan n1 = ";
 cin >> n1;
 cout << "Interval 3<n1<10 = 3<" << n1 << "<10 = " << ((n1>3) && (n1<10)) << endl << endl;

 cout << "Cek interval 5<=n2<=6. Masukkan n2 = ";
 cin >> n2;
 cout << "Interval 5<=n2<=6 = 5<=" << n2 << "<=6 = " << ((n2>=5) && (n2<=6)) << endl << endl;

 cout << "Cek interval 5<=n3<25. Masukkan n3 = ";
 cin >> n3;
 cout << "Interval 5<=n3<25 = 5 <=" << n3 << "<25 = " << ((n3>=5) && (n3<25)) << endl << endl;

 cout << "Cek interval 3<n4<=15 atau 22<n4<32. Masukkan n4 = ";
 cin >> n4;
 cout << "Interval 3<n4<=15 atau 22<n4<32 = 3<" << n4 << "<=15 atau 22<"<<n4<<"<32 = " << (((n4>3) && (n4<=15)) || (n4>22) && (n4<32)) << endl << endl;

 cout << "Cek interval n5<5 atau n5>17. Masukkan n5 = ";
 cin >> n5;
 cout << "Interval n5<5 atau n5>17 = " << n5 << "<5 atau "<<n5<<">17 = " << ((n5<5) || (n5>17)) << endl << endl;

 cout << "Cek interval n6<8 atau interval (9,15] atau interval [21,33). Masukkan n6 = ";
 cin >> n6;
 cout << "Interval n6<8 atau interval (9,15] atau interval [21,33) = " << ((n6<8) || ((n6>9) && n6<=15) || ((n6>=21) && n6<33)) << endl << endl;

 cout << "Cek interval n7<8 atau interval (9,15] atau interval [21,30) atau n7>34. Masukkan n7 = ";
 cin >> n7;
 cout << "Interval n7<8 atau interval (9,15] atau interval [21,30) atau n7>34 = " << ((n7<8) || ((n7>9) && (n7<=15)) || ((n7>=21) && (n7<33)) || (n7>34)) << endl << endl;

 return 0;
}
