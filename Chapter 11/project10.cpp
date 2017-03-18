#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

class StringSet{
public:
	StringSet(vector<string> v);
	void add(string str);
	void del(int index);
	void clearAll();
	int getLength() const;
	void printAll() const;
	friend StringSet operator +(const StringSet& set1, const StringSet& set2);
	friend StringSet operator *(const StringSet& set1, const StringSet& set2);
	double calc_sim(const StringSet& setD) const;
private:
	bool find_same();
	vector<string> set;
};

StringSet::StringSet(vector<string> v){
	set = v;
}

void StringSet::add(string str){
	bool exist = false;
	for (int i = 0; i < set.size(); i++) {
		if (set[i] == str) {
			exist = true;
		}
	}
	if (!exist) {
		set.push_back(str);
	}
}

void StringSet::del(int index){
	set.erase(set.begin() + index);
}

void StringSet::clearAll(){
	set.erase(set.begin(), set.end());
}

int StringSet::getLength() const{
	return set.size();
}

void StringSet::printAll() const{
	for (int i = 0; i < set.size(); i++) {
		cout << set[i];
	}
	cout << endl;
}

StringSet operator +(const StringSet& set1, const StringSet& set2){
	StringSet union_set;
	int i;
	for (i = 0; i < set1.set.size(); i++) {
		union_set.add(set1.set[i]);
	}
	for (i = 0; i < set2.set.size(); i++) {
		union_set.add(set2.set[i]);
	}
	return union_set;
}

StringSet operator *(const StringSet& set1, const StringSet& set2){
	StringSet intersection;
	for (int i = 0; i < set1.set.size(); i++) {
		if (find_same(set1.set[i], set.set2)) {
			intersection.add(set1.set[i]);
		}
	}
	return intersection;
}

double StringSet::calc_sim(const StringSet& setD) const{
	return ((set*setD).size() / (sqrt(set.size()) * sqrt(setD.size())));
}

bool StringSet::find_same(string str, vector<string> v){
	for (int i = 0; i < v.size(); i++) {
		if (str == v[i]) {
			return true;
		}
	}
	return false;
}
