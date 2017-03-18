#include <iostream>
using namespace std;

class Rational{
public:
	Rational();
	Rational(int integer);
	Rational(int num, int den);
	friend istream& operator >>(istream& ins, Rational& rat);
	friend ostream& operator <<(ostream& outs, const Rational& rat);
	friend Rational operator +(const Rational& rat1, const Rational& rat2);
	friend Rational operator -(const Rational& rat1, const Rational& rat2);
	friend Rational operator *(const Rational& rat1, const Rational& rat2);
	friend Rational operator /(const Rational& rat1, const Rational& rat2);
	friend bool operator ==(const Rational& rat1, const Rational& rat2);
	friend bool operator <=(const Rational& rat1, const Rational& rat2);
	friend bool operator >=(const Rational& rat1, const Rational& rat2);
	friend bool operator <(const Rational& rat1, const Rational& rat2);
	friend bool operator >(const Rational& rat1, const Rational& rat2);
private:
	void to_simplest();
	int gcd(int a, int b);
	int numerator;
	int denominator;
};

void Rational::to_simplest(Rational& rat){
	int sign = 1;
	if (rat.numerator < 0) {
		rat.numerator *= -1;
		sign = -sign;
	}
	if (rat.denominator < 0) {
		rat.denominator *= -1;
		sign = -sign;
	}
	int factor = gcd(rat.numerator, rat.denominator);
	rat.numerator = rat.numerator / factor * sign;
	rat.denominator /= factor;
	return;
}

int Rational::gcd(int a, int b){
	int t;
	if (a < b) {
		t = a;
		a = b;
		b = t;
	}
	while (t = a % b) {
		a = b;
		b = t;
	}
	return b;
}

Rational::Rational() : numerator(0), denominator(1){
}

Rational::Rational(int integer) : numerator(integer), denominator(1){
}

Rational::Rational(int num, int den){
	int sign = 1;
	if (num < 0) {
		num *= -1;
		sign = -sign;
	}
	if (den < 0) {
		den *= -1;
		sign = -sign;
	}
	numerator = sign * num;
	denominator = den;
}

istream& operator >>(istream& ins, Rational& rat){
	char slash;
	ins >> rat.numerator >> slash >> rat.denominator;
	return ins;
}

ostream& operator <<(ostream& outs, const Rational& rat){
	outs << rat.numerator << "/" << rat.denominator;
	return outs;
}

Rational operator +(const Rational& rat1, const Rational& rat2){
	Rational add;
	add.numerator = rat1.numerator*rat2.denominator + rat1.denominator*rat2.numerator;
	add.denominator = rat1.denominator*rat2.denominator;
	to_simplest(add);
	return add;
}

Rational operator -(const Rational& rat1, const Rational& rat2){
	Rational min;
	min.numerator = rat1.numerator*rat2.denominator - rat1.denominator*rat2.numerator;
	min.denominator = rat1.denominator*rat2.denominator;
	to_simplest(min);
	return min;
}

Rational operator *(const Rational& rat1, const Rational& rat2){
	Rational mul;
	mul.numerator = rat1.numerator * rat2.numerator;
	mul.denominator = rat1.denominator * rat2.denominator;
	to_simplest(mul);
	return mul;
}

Rational operator /(const Rational& rat1, const Rational& rat2){
	Rational div;
	div.numerator = rat1.numerator * rat2.denominator;
	div.denominator = rat2.numerator * rat1.denominator;
	to_simplest(div);
	return div;
}

bool operator ==(const Rational& rat1, const Rational& rat2){
	return (rat1.numerator*rat2.denominator == rat1.denominator*rat2.numerator);
}

bool operator <=(const Rational& rat1, const Rational& rat2){
	return (rat1.numerator*rat2.denominator <= rat1.denominator*rat2.numerator);
}

bool operator >=(const Rational& rat1, const Rational& rat2){
	return (rat1.numerator*rat2.denominator >= rat1.denominator*rat2.numerator);
}

bool operator <(const Rational& rat1, const Rational& rat2){
	return (rat1.numerator*rat2.denominator < rat1.denominator*rat2.numerator);
}

bool operator >(const Rational& rat1, const Rational& rat2){
	return (rat1.numerator*rat2.denominator > rat1.denominator*rat2.numerator);
}
