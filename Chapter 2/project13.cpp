#include <iostream>
using namespace std;

int main(){
	char gender;
	int unit;
	double weight, height, age, BMR;
	cout << "This program will calculate basal metabolic rate.\n\n";
	cout << "Please indicate your gender. Enter M for male, F for Female: ";
	cin >> gender;
	if (gender != 'M' && gender != 'm' && gender != 'F' && gender != 'f') {
		cout << "Sorry. We haven't designed corresponding program.\n";
		return 1;
	}
	cout << "Please choose the unit system. Enter 1 for International, 2 for British: ";
	cin >> unit;
	if (unit == 1) {
		cout << "Please enter your weight (in kilogram), height (in meter) and age accordingly: ";
		cin >> weight >> height >> age; 
		weight /= 0.454;
		height /= 2.54; 
	} else if (unit == 2) {
		cout << "Please enter your weight (in pound), height (in inch) and age accordingly: ";
		cin >> weight >> height >> age;	
	} else {
		cout << "Please...";
		return 1;
	}
	
	if (gender == 'M' || gender == 'm') {
		BMR = 66 + 6.3 * weight + 12.9 * height - 6.8 * age;
	} else {
		BMR = 655 + 4.3 * weight + 4.7 * height - 4.7 * age;
	}
	cout << "Your daily Basal Metabolic Rate is " << BMR << " Calories.\n";
	
	return 0;
}
		

