#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    double mealCost;
    int tip,tax;
    
    cin >> mealCost >> tip >> tax;
    
    cout << "The total meal cost is " << roundl(mealCost + (double)mealCost*(tip+tax)/100)  << " dollars." << endl;
    return 0;
}
