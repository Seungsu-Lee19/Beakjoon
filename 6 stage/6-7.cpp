#include <iostream>
#include <string>

using namespace std;

int main(){
    string s1;
    string s2;
    char c;

    cin >> s1 >> s2;

    c = s1[0];
    s1[0] = s1[2];
    s1[2] = c; 

    c = s2[0];
    s2[0] = s2[2];
    s2[2] = c; 
    
    if(stoi(s1) > stoi(s2)) cout << s1;
    else cout << s2;

    return 0;
}