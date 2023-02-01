#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    int T, R;

    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> R;
        cin >> s;

        for(int k = 0; k < s.length(); k++){
            for(int t = 0; t < R; t++) cout << s[k];
        }
        cout << "\n";
    }
    

    return 0;
}