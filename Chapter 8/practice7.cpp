#include <iostream>
#include <string>
#include <cstring>
using namespace std;

bool isVowel(char ch){
	switch (ch) {
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': return true;
			break;
		default: return false;
	}
}

string dealNonVowel(string s){
	char first_ch = s.at(0);
	int i, length = s.length();
	for (i = 0; i < length - 1; i++) {
		s[i] = s[i+1];
	}
	s[i] = first_ch;
	s += "ay";
	return s;
}

int main(){
	string first, last;
	cout << "Enter your First and Last name, accordingly: \n";
	cin >> first >> last;

	int i;
	for (i = 0; i < first.length(); i++) {
		first[i] = tolower(first[i]);
	}
	for (i = 0; i < last.length(); i++) {
		last[i] = tolower(last[i]);
	}

	if (isVowel(first.at(0))) {
		first += "way";
	} else {
		first = dealNonVowel(first);
	}
	if (isVowel(last.at(0))) {
		last += "way";
	} else {
		last = dealNonVowel(last);
	}

	first[0] = toupper(first[0]);
	last[0] = toupper(last[0]);

	cout << "The name after converting is: \n";
	cout << first << " " << last << endl;

	return 0;
}
