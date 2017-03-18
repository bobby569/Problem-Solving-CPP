#include <iostream>
using namespace std;
typedef int* intPtr;

void func(intPtr& para){
	cout << para << endl;
	cout << *para << endl;
	*para = 6;
	cout << para << endl;
	cout << *para << endl;
}

int main(){
	intPtr p = new int;
	*p = 5;
	
	cout << p << endl;
	cout << *p << endl;
	
	func(p);
	
	cout << p << endl;
	cout << *p << endl;
	
	delete p;
	
	return 0;
}

