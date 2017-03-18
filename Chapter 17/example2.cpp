#include <iostream>
#include <cstdlib>
using namespace std;

template<class T>
class Pair{
public:
	Pair();
	Pair(T v1, T v2);
	void set_element(int posi, T v);
	T get_element(int posi) const;
private:
	T first;
	T second;
}

int main(){
	Pair<int> score;	//Declare score to record a pair of integers
	Pair<char> seats;	//Declare seats to record a pair of characters

	score.set_element(1, 3);
	score.set_element(2, 0);
}

template<class T>
Pair<T>::Pair(T v1, T v2) : first(v1), second(v2){
}

template<class T>
void Pair<T>::set_element(int posi, T v){
	if (posi == 1) {
		first = v;
	} else if (posi == 2) {
		second = v;
	} else {
		cout << "Error: Illegal.\n";
		exit(1);
	}
}
