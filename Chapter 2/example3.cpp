#include <iostream>
//#include <cstdint> //NOTE: requires "-std=c++11" to compile
using namespace std;

int main(){
	//Change the precision to be two decimals
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	int a = 3;
	double b = 3.4;	//Will print out 3.40
	cout << a << endl;
	cout << b << endl;
	
	return 0;
}

