#include <iostream>
#include <cstdlib>
using namespace std;

//Constructor function has to have the same name as class
//							have no return value (even void)
//							should be placed at public

class BankAccout{
public:
	BankAccout(int dollars, int cents, double rate);	//Initialization
	BankAccout(double dollars, double rate);
	BankAccout();
	void set(int dollars, int cents, double rate);
	void set(double dollars, double rate);
	void update();
	double get_balance();
	double get_rate();
	void output();
private:
	double balance;
	double interest_rate;
	double fraction(double percent);
};

int main(){
	BankAccout account1(10, 50, 2.0), account2;	//account2 will have 0 for all fields

	return 0;
}

BankAccout::BankAccout(int dollars, int cents, double rate){
	if (dollars < 0 || (cents < 0) || (rate < 0)) {
		cout << "Illegal values for money or rate.\n";
		exit(1);
	}
	balance = dollars + 0.01 * cents;
	interest_rate = rate;
}

BankAccout::BankAccout(double dollars, double rate){
	if (dollars < 0 || (rate < 0)) {
		cout << "Illegal values for money or rate.\n";
		exit(1);
	}
	balance = dollars;
	interest_rate = rate;
}

BankAccout::BankAccout() : balance(0), interest_rate(0){
	//Intentionally left blank
}

/* Above is equivalent to 
BankAccout::BankAccout(){
	balance = 0;
	interest_rate = 0;
}
*/
