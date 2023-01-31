#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

    int arr[9], idx = 1, a, max;

    for(int i = 0; i < 9; i++){
        cin >> a;
        arr[i] = a;
    }

    max = arr[0];
    for(int i = 0; i < 9; i++){
        if(arr[i] > max){
            max = arr[i];
            idx = i + 1;
        }
    }

    cout << arr[idx - 1] << "\n" << idx;

    return 0;
}