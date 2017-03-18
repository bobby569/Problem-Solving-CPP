#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip> //io-manipulator
using namespace std;

int main(){
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.setf(ios::right);
	cout.setf(ios::left);
	cout.width(4);

	cout << "Start" << setw(4) << 10 << setw(6) << 30 << endl;
	cout << setprecision(2) << 10.3 << endl
		<< 20.5 << endl;
}