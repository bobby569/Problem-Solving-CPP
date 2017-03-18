#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <cstring>
using namespace std;

class StringVar{
public:
	StringVar();	//Initialize object, set the max length to be 100
	StringVar(int size);	//Initialize object, set the max length to be size
	StringVar(const char a[]);	//let object have same content as char array a
	StringVar(const StringVar& string_object);	//copy constructor
	~StringVar();	//free
	int length() const;	//return the length of the string
	void input_line(istream &ins);	//copy anything before '\n'
	friend ostream& operator <<(ostream& outs, const StringVar& the_string);
private:
	char *value;
	int max_length;
};

void conversation(int max_name_size){
	using namespace std;
	using namespace strvarsavitch;

	StringVar your_name(max_name_size), our_name("Borg");

	cout << "What's your name?\n";
	your_name.input_line(cin);
	cout << "We're " << our_name << endl;
	cout << "We will meet again " << your_name << endl;
}

int main(){
	using namespace std;
	conversation(30);
	cout << "End of demonstration.\n";
	return 0;
}

StringVar::StringVar() : max_length(100){
	value = new char[max_length+1];	//for '\0'
	value[0] = '\0';
}

StringVar::StringVar(int size) : max_length(size){
	value = new char[max_length+1];	//for '\0'
	value[0] = '\0';
}

StringVar::StringVar(const char a[]) : max_length(strlen(a)){
	value = new char[max_length+1];	//for '\0'
	strcpy(value, a);
}

//Copy Constructor: Extremely necessary when pointers and new class are involved
StringVar::StringVar(const StringVar& string_object) : max_length(string_object.length()){
	value = new char[max_length+1];	//for '\0'
	strcpy(value, string_object.value);
}

StringVar::~StringVar(){
	delete [] value;
}

int StringVar::length() const{
	return strlen(value);
}

void StringVar::input_line(istream& ins){
	ins.getline(value, max_length+1);
}

ostream& operator <<(ostream& outs, const StringVar& the_string){
	outs << the_string.value;
	return outs;
}
