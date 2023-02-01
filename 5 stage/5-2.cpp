#include <iostream>

using namespace std;

int self_num(int n){
    int dn = n;
    dn = dn + (dn % 10) + (dn / 10) % 10 + (dn / 100) % 10 + (dn / 1000) % 10;

    return dn;
}

int main(){
    int n = 10000;
    int arr[10001] = {0, };
    int temp;

    for(int i = 1; i <= n; i++){
        temp = self_num(i);
        if(temp <= 10000) arr[temp] = 1;
    }
    for(int i = 1; i <= n; i++){
        if(!arr[i]) cout << i << "\n";
    }

    return 0;
}