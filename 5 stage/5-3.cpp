#include <iostream>

using namespace std;

bool num(int n){
    
    if(n / 1000 > 0){
        int a = n % 10;
        int b = (n / 10) % 10;
        int c = (n / 100) % 10;
        int d = (n / 1000) % 10;

        if(a - b == b - c && b - c == c - d) return true;
    }
    else if(n / 100 > 0){
        int a = n % 10;
        int b = (n / 10) % 10;
        int c = (n / 100) % 10;
        
        if(a - b == b - c) return true;
    }
    else{
        return true;
    }

    return false;
}

int main(){
    int n;
    int sum = 0;

    cin >> n;

    for(int i = 1; i <= n; i++){
        if(num(i)) sum++;
    }

    cout << sum;

    return 0;
}