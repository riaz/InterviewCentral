#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    cin >> n;
    int max = -1;
    int count = 0;
    
    while(n!=0){
              
        if(n%2 == 1)
            count++;
        else{           
            if(count > max)
                max = count;
            count = 0;
        }     
        n /= 2;
    }
    
    cout << (max > count ? max: count) << endl;
    
    return 0;
}
