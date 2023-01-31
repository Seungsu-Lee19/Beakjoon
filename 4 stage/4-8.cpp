#include <iostream>

using namespace std;

int main(){
    // ios::sync_with_stdio(0);
	// cin.tie(0); cout.tie(0);

    char arr[81];
    int n, sum, prev;
    
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr;

        sum = 0;
        prev = 0;
        for(int j = 0; j < 81; j++){
            if(arr[j] == NULL) break;

            if(arr[j] == 'O') prev++;
            else prev = 0;

            sum += prev;
        }

        cout << sum << "\n";
    }

    return 0;
}
