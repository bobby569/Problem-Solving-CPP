#include <iostream>
using namespace std;

int main(){
	double total, quarter, dime, cent;
	cout << "Enter the number of Quarter(s): ";
	cin >> quarter;
	cout << "Enter the number of Dime(s): ";
	cin >> dime;
	cout << "Enter the number of Cent(s): ";
	cin >> cent;
	
	total = 25 * quarter + 10 * dime + cent;
	total /= 100;
	
	cout << "The total amount is $" << total << endl;
	
	return 0;
}
