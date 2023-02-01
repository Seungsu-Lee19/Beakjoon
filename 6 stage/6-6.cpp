#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    int sum = 0;

    getline(cin, s);

    if(s.length() == 1 && s[0] == ' ') {
        cout << sum;
        return 0;
    }
    if(s[0] == ' ') s[0] = 'a';

    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' ' && i == s.length() - 1) continue;
        else if(s[i] == ' ') sum++;
    }

    cout << sum + 1;

    return 0;
}