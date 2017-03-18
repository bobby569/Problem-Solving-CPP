#include <iostream>
#include <string>
using namespace std;

int main(){
	vector<int> v1;
	//std::vector<int> v;

	//To initialize
	v1.push_back(5);
	v1.push_back(7);
	v1.push_back(10);

	vector<double> v2 = {0.0, 1.1, 2.2};
	//v2.size() will return 3

	vertor<int> v3(10);	//Initialize v3 to be length 10 
						//and all elements to be 0

	//Relationship: v.size() <= v.capacity()
	v.reserve(v.size() + 10);	//reserve is used to increase the capacity
	v.resize(24);	//it will change the size of v

	return 0;

}