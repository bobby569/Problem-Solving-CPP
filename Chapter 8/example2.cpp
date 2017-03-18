#include <iostream>
#include <string>
using namespace std;

int main(){
	char ch[] = "This is not a string";
	string s;
	s = ch;	//legal

	ch = s;	//illegal
	strcpy(ch, s);	//illegal

	strcpy(ch, s.c_str());	//legal

	int i;
	double d;
	string s;
	i = stoi("35");	//atoi("35");
	d = stod("2.5");	//atof("2.5");
	s = to_string(d*2);
	cout << i << " " << d << " " << s << endl;
}