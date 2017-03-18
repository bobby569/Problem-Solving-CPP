//Overload "=" operator
//Must be member function in a class
//Cannot be friend function

//All other codes please refer example4.cpp
class StringVar{
public:
	void operator =(const StringVar& right_side);
	//
private:
	//
}

//Information may be lost
void StringVar::operator =(const StringVar& right_side){
	int new_length = strlen(right_side.value);
	if (new_length > max_length) {
		new_length = max_length;
	}
	for (int i = 0; i < new_length; i++) {
		value[i] = right_side.value[i];
	}
	value[new_length] = '\0';
}

//Ultimate Version
void StringVar::operator =(const StringVar& right_side){
	int new_length = strlen(right_side.value);
	if (new_length > max_length) {
		delete [] value;
		max_length = new_length;
		value = new char[max_length+1];
	}
	for (int i = 0; i < new_length; i++) {
		value[i] = right_side.value[i];
	}
	value[new_length] = '\0';
}
