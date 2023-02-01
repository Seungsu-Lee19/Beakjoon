#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    int arr[26] = {0, };
    int sum = 0;
    int max = 0;
    int idx = 0;

    cin >> s;

    for(int i = 0; i < s.length(); i++) {
        s[i] = toupper(s[i]);
        arr[(int)s[i] - (int)'A']++;
    }

    for(int i = 0; i < 26; i++){
        if(arr[i] > max){
            max = arr[i];
            sum = 0;
            idx = i;
        }
        else if(arr[i] == max){
            sum++;
        }
    }

    if(sum) cout << "?";
    else cout << (char)(idx + 'A');

    return 0;
}