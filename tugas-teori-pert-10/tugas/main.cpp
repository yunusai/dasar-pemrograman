#include <iostream>

using namespace std;

int main() {
    int bar,n;
    cin >> bar;
    for (int i=1;i<=bar;i++){
        for(int j=1;j<=i;j++){
            n=i;
            cout << n;
        }
        if(i>=2){
            cout << " ";
            for(int j=1; j<=i;j++){
                cout << n;
            }
        }
        cout << endl;
        }

return 0;
    }
