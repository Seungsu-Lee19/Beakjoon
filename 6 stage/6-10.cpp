#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    int n, sum = 0;
    int flag = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> s;

        flag = 0;
        for(int k = 0; k < s.length() - 1; k++){
            for(int j = k; j < s.length(); j++){
                if(s[k] == s[j + 1]){
                    if((j + 1) - k > 1) flag = 1;
                    break;
                }
            }

            if(flag) break;
        }

        if(!flag) sum++;
    }

    cout << sum;

    return 0;
}