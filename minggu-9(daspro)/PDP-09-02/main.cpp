#include <iostream>

using namespace std;

int main()
{
    int n, sum, i;
    sum=0;
    i=1;
    cin >> n;
    while(i<=n){
    cout << i << endl;
    sum = sum + i;
    i++;
    }
    cout << "Hasil penjumlahan dari 1 sampai " << n << " adalah " << sum;

    return 0;
}
