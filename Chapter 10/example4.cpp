//This will demonstrate derived class
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

class SavingAccount : public BankAccout{
public:
	SavingAccount(int dollars, int cents, double rate);
	SavingAccount();
	void deposit(int dollars, int cents);
	void withdraw(int dollars, int cents);
private:
};

int main(){
	SavingAccount account(100, 50, 5.5);
	account.output();
	cout << endl;

	cout << "Depositing $10.25.\n";
	account.deposit(10, 25);
	account.output();
	cout << endl;

	cout << "Withdrawing $11.80.\n";
	account.withdraw(11, 80);
	account.output();
	cout << endl;

	return 0;
}

SavingAccount::SavingAccount(int dollars, int cents, double rate):BankAccout(dollars, cents, rate){

}

void SavingAccount::deposit(int dollars, int cents){
	double balance = get_balance();
	balance += dollars + (static_cast<double>(cents) / 100);
	int new_dollars = static_cast<int>(balance);
	int new_cents = static_cast<int>((balance - new_dollars) * 100);
	set(new_dollars, new_cents, get_rate());
}

void SavingAccount::withdraw(int dollars, int cents){
	double balance = get_balance();
	balance -= dollars + (static_cast<double>(cents) / 100);
	int new_dollars = static_cast<int>(balance);
	int new_cents = static_cast<int>((balance - new_dollars) * 100);
	set(new_dollars, new_cents, get_rate());
}

