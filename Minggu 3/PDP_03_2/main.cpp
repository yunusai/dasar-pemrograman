#include <iostream>

/*
Muhammad Yunus Saifullah -  A11.2022.14341
Kelompok 4108
*/

using namespace std;

int main()
{
    float r1, r2 , l1, l2, l3, phi = 3.14;

    cout << "Jari jari lingkaran 1 = ";
    cin >> r1;
    cout << "Jari jari lingkaran 2 = ";
    cin >> r2;

    l1 = phi * r1 * r1;
    l2 = phi * r2 * r2;

    cout << "\nLuas lingkaran 1 = " << l1 << "meter kubik\n";
    cout << "Luas lingkaran 2 = " << l2 << "meter kubik\n";

    l3 = l2 - l1;

    cout << "Luas lingkaran 3 = " << l3 << "meter kubik\n";

    return 0;
}
