#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string decrypt(string encrypted, int key){
	int i;
	char ans[encrypted.length()];
	for (i = 0; i < encrypted.length(); i++) {
		if (encrypted[i] - key < 32 || encrypted[i] - key > 126) {
			ans[i] = encrypted[i] + 95 - key;
		} else {
			ans[i] = encrypted[i] - key;
		}
	}
	return ans;
}

int main(){
	int key;
	string encrypted;
	cout << "Enter the encrypted message: \n";
	cin >> encrypted;
	for (key = 1; key <= 100; key++) {
		cout << "When key=" << key << ": " << decrypt(encrypted, key) << endl;
	}
	return 0;
}
