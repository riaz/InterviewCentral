/*
Input Format

The first line contains an integer, . 
The second line contains a double, . 
The third line contains a string, .

Output Format

Print the sum of both integers on the first line, the sum of both doubles (scaled to  decimal place)
on the second line, and then the two concatenated strings on the third line.

*/

#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main(){
	int i = 4;
	double d = 4.0;
	string s = "HackerRank ";

	//Declare the second integer, double , String variables

	int j;
	double d1;
	stirng s1;

	cin >> j >> d1;
	cin.ignore();

	getline(cin, s1);

	cout << i + j << endl;
	cout << fixed << setprecision(1) << d + d1 << endl;
	cout << s + s1 << endl;

	return 0;
}

