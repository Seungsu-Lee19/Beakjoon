#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    int sum = 0;

    cin >> s;

    int len = s.length();
    for(int i = 0; i < len; i++){
        if(s[i] == 'c'){
            if(i != len - 1 && s[i + 1] == '='){
                i++;
            }
            else if(i != len - 1 && s[i + 1] == '-'){
                i++;
            }
        }
        else if(s[i] == 'd'){
            if(i != len - 1 && s[i + 1] == 'z'){
                if(i != len -2 && s[i + 2] == '='){
                    i += 2;
                }
            }
            else if(i != len - 1 && s[i + 1] == '-'){
                i++;
            }
        }
        else if(s[i] == 'l'){
            if(i != len - 1 && s[i + 1] == 'j'){
                i++;
            }
        }
        else if(s[i] == 'n'){
            if(i != len - 1 && s[i + 1] == 'j'){
                i++;
            }
        }
        else if(s[i] == 's'){
            if(i != len - 1 && s[i + 1] == '='){
                i++;
            }
        }
        else if(s[i] == 'z'){
            if(i != len - 1 && s[i + 1] == '='){
                i++;
            }
        }
        sum++;
    }

    cout << sum;

    return 0;
}