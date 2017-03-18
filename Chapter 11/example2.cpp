//Overloading operators
class Money{
public:
	friend Money operator +(const Money& amount1, const Money& amount2);
	friend bool operator ==(const Money& amount1, const Money& amount2);
	Money();
	Money(long dollars, int cents);
	double get_value() const;
	void input();
	void output() const;
private:
	long all_cents;	
};

Money operator +(const Money& amount1, const Money& amount2){
	Money temp;
	temp.all_cents = amount1.all_cents + amount2.all_cents;
	return temp;
}

bool operator ==(const Money& amount1, const Money& amount2){
	return (amount1.all_cents == amount2.all_cents);
}

/*
Rules to follow
1.	One of the paraments must be class type.
2.	The overloaded operators can be, but not necessarily, the friend of the class.
3.	Cannot create an operator. Can only overload the existing operators
4.	Cannot change the number of parameters received.
5.	Cannot change the priority of operators
6.	The following operators cannot be overloaded: dot(.), scope resolution operator(::), 
	and all else not mentioned.
7.	This method is not applicable to =, [], ->