#include <iostream>
using namespace std;

int main(){
	int total, quarter, dime, cent;
	cout << "Enter the number of Quarter(s): ";
	cin >> quarter;
	cout << "Enter the number of Dime(s): ";
	cin >> dime;
	cout << "Enter the number of Cent(s): ";
	cin >> cent;
	
	total = 25 * quarter + 10 * dime + cent;
	
	if (total >= 100) {
		cout << "The total amount is " << total / 100 << " dollar(s) " << total % 100 << " cent(s) " << "\n";
	} else {
		cout << "The total amount is " << total << " cent(s)\n";
	}
	
	return 0;
}
