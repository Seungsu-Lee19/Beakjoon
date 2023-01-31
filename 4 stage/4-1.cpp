#include <iostream>

using namespace std;

int main(){
    int arr[101], n, a, b, num = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a;
        arr[i] = a;
    }
    cin >> b;

    for(int i = 0; i < n; i++){
        if(arr[i] == b) num += 1;
    }

    cout << num;

    return 0;
}