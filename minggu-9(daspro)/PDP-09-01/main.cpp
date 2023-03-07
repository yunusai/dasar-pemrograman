#include <iostream>

using namespace std;

int main()
{

    int n, i;
    i=1;
    cin >> n;
    while(true){
    cout << "Mahasiswa ke-" << i << endl;
    if(i==n){
    break;
    }
    i++;
    }

    return 0;
}
