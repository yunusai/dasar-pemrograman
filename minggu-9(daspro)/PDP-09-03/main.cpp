#include <iostream>

using namespace std;

int main()
{
    float sum, rata2, n;
    int i, a;

    sum = 0;
    i = 0;

    cin >> a;

    do{
    cin >> n;
    sum = sum + n;
    i++;
    }while(i<a);

    rata2 = sum/i;

    cout << rata2;
    return 0;
}
