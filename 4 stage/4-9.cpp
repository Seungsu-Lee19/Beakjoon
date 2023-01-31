#include <iostream>
#include<cmath>

using namespace std;

int main(){
    // ios::sync_with_stdio(0);
	// cin.tie(0); cout.tie(0);

    int arr[1000];
    int n, t, a, sum;
    double r;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> t;

        sum = 0;
        r = 0;
        for(int j = 0; j < t; j++){
            cin >> a;
            arr[j] = a;
            sum += a;
        }
        for(int j = 0; j < t; j++){
            if(arr[j] > ((double)sum / (double)t)){
                r++;
            }
        }
        cout.setf(ios::fixed);
        cout.precision(3);
        cout << round((double)(r / (double)t * 100) * 10000 ) / 10000 << "%\n";
        
    }

    return 0;
}
