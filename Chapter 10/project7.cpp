#include <iostream>
using namespace std;

class Rational{
public:
	Rational();
	Rational();
	void input(istream& iftr);
	void output(ostream& oftr);
	void add();
	void sub();
	void mul();
	void div();
	bool less();
	int neg();
	int get_numerator();
	int get_denominator();
private:
	int numerator;
	int denominator;
}

Rational::Rational(int new_numerator, int new_denominator){
	numerator = new_numerator;
	denominator = new_denominator;
}

Rational::Rational(int new_numerator){
	numerator = new_numerator;
	denominator = 1;
}

void Rational::add(Rational addend){
	
}

int get_numerator(){
	return numerator;
}

int get_denominator(){
	return denominator;
}