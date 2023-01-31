#include <iostream>

using namespace std;

int main(){
    int a;

    cin >> a;

    for(int i = 0; i < a; i++){
        int t1, t2;

        cin >> t1 >> t2;

        if(i == (a - 1)){
            cout << t1 + t2;
            break;
        }
        cout << t1 + t2 << endl;
    }

    return 0;
}