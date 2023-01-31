#include <iostream>

using namespace std;

int main(){
    int a, n = 0;
    int t;
    cin >> a;

    if(a < 10){
        a *= 10;
    }

    t = a;
    while(1){
        n += 1;
        t = ((t % 10) * 10) + (((t / 10) + (t % 10)) % 10);

        if(a == t){
            cout << n;
            break;
        }
    }
    
    return 0;
}