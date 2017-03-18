#include <iostream>
using namespace std;

template<class T>	//Widely accepted
//template<typename T>	//Also accepted

void swap(T& v1, T& v2){
	T temp = v1;
	v1 = v2;
	v2 = temp;
}

int main(){
	int a = 9, b = 6;
	swap(a, b);
	double c = 9.9, d = 6.6;
	swap(c, d);
	char e = '6', f = '9';
	swap(e, f);
	
	return 0;
}
