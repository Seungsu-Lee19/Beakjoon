#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    int N, num, sum = 0;

    cin >> N;

    cin >> s;
    
    for(int i = 0; i < N; i++)
        sum += ((int)s[i] - (int)'0');

    cout << sum;

    return 0;
}