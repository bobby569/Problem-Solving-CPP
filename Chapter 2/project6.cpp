#include <iostream>
using namespace std;

int main(){
	int work_hour, family_member;
	cout << "This program will calculate the salary.\n\n";
	cout << "The wage standard is $16.78 per hour.\n"
			<< "Enter your working hours during a week: ";
	cin >> work_hour;
	cout << "Enter the number of people in your family: ";
	cin >> family_member;
	
	int extra_insurance = 0;
	const int MEMBER_FEE = 10;
	const double wage_std = 16.78;
	double wage, insurance, unite_tax, state_tax, final_wage;
	
	if (work_hour <= 40) {
		wage = wage_std * work_hour;
	} else {
		wage = wage_std * 40 + wage_std * 1.5 * (work_hour - 40);
	}
	insurance = wage * 0.06;
	unite_tax = wage * 0.14;
	state_tax = wage * 0.05;
	if (family_member >= 3) {
		extra_insurance = 35;
	}
	final_wage = wage - insurance - unite_tax - state_tax - MEMBER_FEE - extra_insurance;
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	cout << "Your wage before tax: $" << wage << endl;
	cout << "You need to pay $" << insurance << " for the social insurance.\n";
	cout << "You need to pay $" << unite_tax << " for the unite tax.\n";
	cout << "You need to pay $" << state_tax << " for the state tax.\n";
	cout << "Your pure wage is $" << final_wage << endl;
	
	return 0;
}
	
