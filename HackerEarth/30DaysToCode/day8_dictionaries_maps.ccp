#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<string,int> phbk;
    int T;
    string name;
    int num;
    
    cin >> T;
    
    while(T--){
        cin >>  name >> num;        
        phbk.insert(pair<string,int>(name,num));
    }
    
    string queryName;
    
    cin.ignore();
    
    while(getline(cin,queryName)){
        if(phbk.find(queryName)!= phbk.end())
            cout << queryName << "=" << phbk.find(queryName)->second << endl;
        else
            cout << "Not found" << endl;
    }
    
    
    
    return 0;
}
