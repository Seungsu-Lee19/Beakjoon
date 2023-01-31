#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

    int arr[30] = {0, }, a;
    
    for(int i = 0; i < 28; i++){
        cin >> a;
        arr[a - 1] = 1;
    }

    for(int i = 0; i < 30; i++){
        if(arr[i] == 0){
            cout << i + 1 << "\n";
        }
    }


    return 0;
}