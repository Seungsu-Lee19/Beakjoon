#include <iostream>

using namespace std;

int main(){
    int a;

    cin >> a;

    for(int i = 1; i < 10; i++){
        if(i == 9){
            cout << a << " * " << i << " = " << a * i;
            break;
        }
        cout << a << " * " << i << " = " << a * i << endl;
    }

    return 0;
}