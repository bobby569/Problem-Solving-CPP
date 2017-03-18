#include <iostream>
#include <cstddef>

struct StackFrame{
	char data;
	StackFrame *link;
}
typedef StackFrame* StackFramePtr;

class Stack{
public:
	Stack();
	Stack(const Stack& a_stack);
	~Stack();
	void push(char the_symbol);
	char pop();
	bool empty() const;
private:
	StackFramePtr top;
}

using namespace std;

Stack::Stack() : top(NULL){
}

Stack::Stack(const Stack& a_stack){
	top = a_stack;	//not sure
}

Stack::~Stack(){
	char next;
	while (!empty()) {
		next = pop();
	}
}

bool Stack::empty() const{
	return (top == NULL);
}

void Stack::push(char the_symbol){
	//???
}

char Stack::pop(){
	if (empty()) {
		cout << "Empty Stack.\n";
		exit(1);
	}
	char result = top->data;
	StackFramePtr temp_ptr;
	temp_ptr = top;
	top = top->link;

	delete temp_ptr;

	return result;
}

int main(){
	Stack s;
	char next, ans;

	cout << "Enter a word: ";
	cin.get(next);
	while (next != '\n') {
		s.push(next);
		cin.get(next);
	}
	
	cout << "Written backword that is: ";
	while (!s.empty()) {
		cout << s.pop();
	}
	cout << endl;

	return 0;
}