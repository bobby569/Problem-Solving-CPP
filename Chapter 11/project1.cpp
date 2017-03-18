#include <iostream>
using namespace std;

class VectorDouble{
public:
	friend bool operator ==(const VectorDouble& vec1, const VectorDouble& vec2);
	void operator =(const VectorDouble& right_side);
	VectorDouble();
	VectorDouble(int vec_size);
	VectorDouble(VectorDouble& vec);
	~VectorDouble();
	void push_back(double new_element);
	int capacity(int new_max_count);
	int size(int new_count);
	void reserve();
	void resize();
	double value_at(int index) const;
	void change_value_at(double content, int index);
private:
	double *array;
	int max_count;
	int count;
};

int main(){
	return 0;
}

bool operator ==(const VectorDouble& vec1, const VectorDouble& vec2){
	if (vec1.count != vec2.count) {
		return false;
	}
	for (int i = 0; i < vec1.count; i++) {
		if (vec1[i] != vec2[i]) {
			return false;
		}
	}
	return true;
}
	
void VectorDouble::operator =(const VectorDouble& right_side){
	max_count = right_side.max_count;
	count = right_side.count;
	delete [] array;
	array = new double[max_count];
	for (int i = 0; i < count; i++) {
		array[i] = right_side.array[i];
	}
}

VectorDouble::VectorDouble() : max_count(50), count(0){
	array = new double[max_count];
}

VectorDouble::VectorDouble(int vec_size) : max_count(vec_size), count(0){
	array = new double[max_count];
}

VectorDouble::VectorDouble(const VectorDouble& vec){
	max_count = vec.capacity();
	count = vec.size();
	array = new double[max_count];
	for (int i = 0; i < count; i++) {
		array[i] = vec[i];
	}
}

VectorDouble::~VectorDouble(){
	delete [] array;
}

void VectorDouble::push_back(double new_element){
	count++;
	if (count <= max_count) {
		array[count-1] = new_element;
	} else {
		max_count *= 2;
		double temp[count-1];
		int i;
		for (i = 0; i < count - 1; i++) {
			temp[i] = array[i];
		}
		delete [] array;
		array = new double[max_count];
		for (i = 0; i < count; i++) {
			array[i] = temp[i];
		}
	}
}

int VectorDouble::capacity() const{
	return max_count;
}

int VectorDouble::size() const{
	return count;
}

void VectorDouble::reserve(int new_max_count){
	if (max_count < new_max_count) {
		max_count = new_max_count;
	}	
}

void VectorDouble::resize(int new_count){
	if (max_count < new_count) {
		max_count = new_count;
	}
	int i;
	if (count < new_count) {
		for (i = count; i < new_count; i++) {
			array[i] = 0;
		}
	} else {
		for (i = new_count; i < count; i++) {
			array[i] = 0;	//Can be improved
		}
	}
	count = new_count;
}

double VectorDouble::value_at(int index) const{
	return array[index];
}

void VectorDouble::change_value_at(double content, int index){
	array[index] = content;
}
