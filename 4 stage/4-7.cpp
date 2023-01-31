#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

    int arr[1000] = {0, }, n, a, max = 0, sum = 0;
    
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a;
        if(a > max) max = a;
        sum += a;
    }

    double avr = (double)sum / (double)max;
    avr = (double)avr / (double)n;
    avr *= 100;

    cout << avr;

    return 0;
}
