#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    int time[] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
    int sum = 0;
    cin >> s;

    for(int i = 0; i < s.length(); i++){
        sum += time[(int)s[i] - (int)'A'];
    }

    cout << sum;

    return 0;
}