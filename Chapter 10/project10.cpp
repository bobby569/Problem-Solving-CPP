#include <iostream>
#include <cmath>
using namespace std;

class ZipCode{
public:
	ZipCode(int new_zip);
	ZipCode(string new_code);
	void zip_to_code();
	void code_to_zip();
	int get_zip();
	string get_code();
private:
	string convert_to_code(int unit);
	int convert_to_zip(string str);
	int zip;
	string code;
};

int main(){
	ZipCode stripe("110100101000101011000010011"), zipcode(99504);
	stripe.code_to_zip();
	zipcode.zip_to_code();
	cout << "The zipcode corresponding to the stripe is: " << stripe.get_zip() << endl;
	cout << "The stripe corresponding to the zipcode is: " << zipcode.get_code() << endl;
	return 0;
}

ZipCode::ZipCode(int new_zip){
	zip = new_zip;
}

ZipCode::ZipCode(string new_code){
	code = new_code;
}

void ZipCode::zip_to_code(){
	int zipcopy = zip;
	string binary_code[5];
	int i;
	for (i = 0; i < 5; i++) {
		binary_code[i] = convert_to_code(zipcopy % 10);
		zipcopy /= 10;
	}
	for (i = 4; i >= 0; i--) {
		code += binary_code[i];
	}
	code = "1" + code + "1";
}

void ZipCode::code_to_zip(){
	int num = 0, index = 1, i;
	for (i = 0; i < 5; i++) {
		num += convert_to_zip(code.substr(index, 5)) * pow(10, (4-i));
		index += 5;
	}
	zip = num;
}

int ZipCode::get_zip(){
	return zip;
}

string ZipCode::get_code(){
	return code;
}

string ZipCode::convert_to_code(int unit){
	string binary = "00000";
	int count = 0;
	if (unit == 0) {
		return "11000";
	}
	if (unit / 7) {
		binary[0] = '1';
		unit %= 7;
		count++;
	}
	if (unit / 4) {
		binary[1] = '1';
		unit %= 4;
		count++;
	}
	if (unit / 2) {
		binary[2] = '1';
		unit %= 2;
		count++;
	}
	if (unit) {
		binary[3] = '1';
		count++;
	}
	if (count == 1) {
		binary[4] = '1';
	}
	return binary;
}

int ZipCode::convert_to_zip(string str){
	int num = 0;
	if (static_cast<int>(str[0]) - '0') {
		num += 7;
	}
	if (static_cast<int>(str[1]) - '0') {
		num += 4;
	}
	if (static_cast<int>(str[2]) - '0') {
		num += 2;
	}
	if (static_cast<int>(str[3]) - '0') {
		num += 1;
	}
	if (num > 9) {
		num = 0;
	}
	return num;
}
