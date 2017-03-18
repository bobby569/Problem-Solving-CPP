#include <iostream>
#include <cstdlib>	//abs
#include <cmath>	//fabs
using namespace std;

int main(){
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(6);

	double n, guess;
	cout << "This program will find the square root of the number\n";
	
	do {
		cout << "Enter n: ";
		cin >> n;
		if (n < 0) {
			cout << "The number should be positive.\n";
		}
	} while (n < 0);
	
	guess = n / 2;
	for (int i = 0; i < 100; i++) {
		guess = (guess + n / guess) / 2;	
	}
	
	cout << "The square root of " << n << " is " << guess << endl;
	
	return 0;
}

