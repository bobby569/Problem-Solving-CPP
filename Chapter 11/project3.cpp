#include <iostream>
using namespace std;

class Complex{
public:
	Complex();
	Complex(double real_part);
	Complex(double real_part, double image_part);
	friend istream& operator >>(istream& ins, Complex& com);
	friend ostream& operator <<(ostream& outs, const Complex& com);
	friend Complex operator +(const Complex& com1, const Complex& com2);
	friend Complex operator -(const Complex& com1, const Complex& com2);
	friend Complex operator *(const Complex& com1, const Complex& com2);
	friend Complex operator /(const Complex& com1, const Complex& com2);
	double absolute() const;
	Complex conjugate() const;
private:
	double real;
	double imaginary;
};

const Complex i(0, 1);

Complex::Complex() : real(0), imaginary(0){
}

Complex::Complex(double real_part) : real(real_part), imaginary(0){
}

Complex::Complex(double real_part, double image_part) : real(real_part), imaginary(image_part){
}

istream& operator >>(istream& ins, Complex& com){
	char sign, i;
	ins >> com.real >> sign >> com.imaginary >> i;
	if (sign == '-') {
		com.imaginary = -com.imaginary;
	}
	return ins;
}

ostream& operator <<(ostream& outs, const Complex& com){
	char sign = '';
	if (com.imaginary > 0) {
		sign = '+';
	}
	outs.setf(ios::fixed);
	outs.setf(ios::showpoint);
	outs.precision(2);
	outs << com.real << sign << com.imaginary << "i";
	return outs;
}

Complex operator +(const Complex& com1, const Complex& com2){
	Complex add;
	add.real = com1.real + com2.real;
	add.imaginary = com1.imaginary + com2.imaginary;
	return add;
}

Complex operator -(const Complex& com1, const Complex& com2){
	Complex min;
	min.real = com1.real - com2.real;
	min.imaginary = com1.imaginary - com2.imaginary;
	return min;
}

Complex operator *(const Complex& com1, const Complex& com2){
	Complex mul;
	mul.real = com1.real * com2.real - com1.imaginary * com2.imaginary;
	mul.imaginary = com1.real * com2.imaginary + com2.real * com1.imaginary;
	return mul;
}

Complex operator /(const Complex& com1, const Complex& com2){
	Complex div = com1 * com2.conjugate();
	div.real /= com2.absolute();
	div.imaginary /= com2.absolute();
	return div;
}

double Complex::absolute() const{
	return (real*real + imaginary*imaginary);
}

Complex Complex::conjugate() const{
	Complex con;
	con.real = real;
	con.imaginary = -imaginary;
	return con;
} 
