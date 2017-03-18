#include <iostream>
#include <cmath>
using namespace std;

void get_side(double &a, double &b, double &c){	//double& a
	do {
		cout << "Enter the length of three sides: ";
		cin >> a >> b >> c;
		if (a <= 0 || b <= 0 || c <= 0) {
			cout << "Come on :(\n";
		}
	} while (a <= 0 || b <= 0 || c <= 0);
}

bool isValid(double a, double b, double c) {
	if (a+b > c && a+c > b && b+c > a) {
		return 1;
	} else {
		return 0;
	}
}

void calculate(double a, double b, double c, double &perimeter, double &area){
	perimeter = a + b + c;
	double s = perimeter / 2;
	area = sqrt(s * (s-a) * (s-b) * (s-c));
}

int main(){
	double a, b, c, perimeter, area;
	get_side(a, b, c);
	if (!isValid(a, b, c)) {
		cout << "Invalid triangle.\n";
		return 1;
	}
	calculate(a, b, c, perimeter, area);

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout << "The perimeter is " << perimeter << endl
		<< "The area is " << area << endl;

	return 0;
}