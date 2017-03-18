#include <iostream>
#include <cstdlib>
using namespace std;

class DayOfYear{
public:
	void input();
	void output();
	void set(int new_month, int new_day);
	int get_month();
	int get_day();
private:
	void check_date();
	int month;
	int day;
};

int main(){
	DayOfYear today, bobby_birthday;

	cout << "Enter today's date:\n";
	today.input();
	cout << "Today's date is ";
	today.output();

	bobby_birthday.set(8, 30);
	cout << "Yuchen B. Zhang's birthday is ";
	bobby_birthday.output();

	if (today.get_month() == bobby_birthday.get_month() && today.get_day() == bobby_birthday.get_day()) {
		cout << "Happy Birthday!\n";
	} else {
		cout << "Happy Unbirthday!\n";
	}

	return 0;
}

void DayOfYear::input(){
	cout << "Enter month as a number: ";
	cin >> month;	//private member can only be used during the definition of member function
	cout << "Enter the day of the month: ";
	cin >> day;
	check_date();
}

void DayOfYear::output(){
	cout << "month = " << month << ", day = " << day << endl;
}

void DayOfYear::set(int new_month, int new_day){
	month = new_month;
	day = new_day;
	check_date();
}

void DayOfYear::check_date(){
	if (month < 1 || month > 12 || day < 1 || day > 31) {
		cout << "Illegal date. Aborting program.\n";
		exit(1);
	}
}

int DayOfYear::get_month(){
	return month;
}

int DayOfYear::get_day(){
	return day;
}
