#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int T;
    cin >> T;
    string str;
    
    while(T--){
        cin >> str;
        
        for(int i=0;i<str.length();i+=2)
            cout << str[i];
        
        cout <<  " ";
        
        for(int i=1;i<str.length();i+=2)
            cout << str[i];
        
        cout << endl;
        
    }
    
    return 0;
}
