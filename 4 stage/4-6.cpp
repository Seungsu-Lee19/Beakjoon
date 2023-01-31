#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

    int arr[42] = {0, }, a, sum = 0;
    
    for(int i = 0; i < 10; i++){
        cin >> a;
        arr[a % 42] = 1;
    }

    for(int i = 0; i < 42; i++){
        if(arr[i] == 1){
            sum += 1;
        }
    }
    cout << sum;

    return 0;
}