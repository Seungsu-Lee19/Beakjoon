#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    int flag;

    cin >> s;
    
    for(int i = (int)'a'; i <= (int)'z'; i++){
        for(int k = 0; k < s.length(); k++){
            if((int)s[k] == i){
                flag = k;
                break;
            }
            flag = -1;
        }
        
        cout << flag << " ";
    }

    return 0;
}