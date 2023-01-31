#include <iostream>

using namespace std;

int main(){
    int h, m, t, a, b;

    cin >> h >> m;
    cin >> t;

    a = (m + t) / 60;
    b = (m + t) % 60;
    
    if((h + a) >= 24){
        cout << (h + a) - 24 << " " << b;
    }
    else{
        cout << (h + a) << " " << b;
    }

    return 0;
}