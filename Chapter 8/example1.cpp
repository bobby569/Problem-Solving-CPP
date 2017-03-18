#include <iostream>
#include <string>
using namespace std;

int main(){
	string sentence;
	string adj("cute and young"), noun("ladies");
	string wish = "Hail Beauty!";

	sentence = "I love " + adj + " " + noun + "!";
	cout << sentence << endl;
	cout << wish << endl;

	return 0;
}