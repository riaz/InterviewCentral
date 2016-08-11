#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


long long factorial(int num){
    if(num == 1 ) return 1;
    else
        return num*factorial(num-1);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    cin >> N;
    cout << factorial(N) << endl;
    return 0;
}