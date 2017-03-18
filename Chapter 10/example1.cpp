#include <iostream>
using namespace std;

struct Person{
	string name;
	int age;
	long DoB;
};

int main(){
	Person Bobby = {"Bobby", 20, 830};	//Cannot be 0830, because 0 in the front indicate octal constant
	Person Shari = {"Shari", 19, 414};

	cout << Bobby.age << endl;
	cout << Shari.DoB << endl;

	return 0;
};
