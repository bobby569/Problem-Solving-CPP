#include <iostream>
#include <string>
using namespace std;

class Pet{
public:
	virtual void print();
	string name;
};

class Dog : public Pet{
public:
	virtual void print();
	string breed;	
};

int main()
{
	Dog vdog;
	Pet vpet;
	vdog.name = "Tiny";
	vdog.breed = "Great Dane";
	vpet = vdog;

	Dog *pdog = new Dog;
	pdog->name = "Tiny";
	pdog->breek = "Great Dane";

	Pet *ppet = pdog;
	ppet->print();
	pdog->print();

	return 0;
}

void Dog::print(){
	cout << "name: " << name << endl;
	cout << "breed: " << breed << endl;
}

void Pet::print(){
	cout << "name: " << endl;
}