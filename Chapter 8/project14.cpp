#include <iostream>
#include <string>
#include <cctype>
#include <vector>
using namespace std;

vector<string> split(string target, string delimiter){
	vector<string> v;
	int prev_index = 0, next_index;	

	next_index = target.find(delimiter, prev_index);
	while (next_index >= prev_index) {
		v.push_back(target.substr(prev_index, next_index - prev_index));
		prev_index = next_index+1;
		next_index = target.find(delimiter, prev_index);
	}
	v.push_back(target.substr(prev_index, target.length() - prev_index));

	return v;
}

int main(){
	vector<string> a = split("10,20,30",",");
	vector<string> b = split("do re mi fa so la ti do", " ");
	unsigned int i;
	for (i = 0; i < a.size(); i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	for (i = 0; i < b.size(); i++) {
		cout << b[i] << endl;
	}

	return 0;
}
