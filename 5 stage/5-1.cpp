#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

long long sum(vector<int> &a){
    return accumulate(a.begin(), a.end(), 0.0);
}
