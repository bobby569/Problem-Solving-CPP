//Use node class to implement linked list
#include <iostream>
#include <cstddef>

//Start
class Node{
public:
	Node();
	Node(int value, Node *next);
	int getData() const;
	Node *getLink() const;
	void setData(int value);
	void setLink(Node *next);
private:
	int data;
	Node *link;
};

typedef Node* NodePtr;
//End: Should be in .h file

//Start
Node::Node() : data(0), link(NULL){
}

Node::Node(int value, Node *next) : data(value), link(next){
}

int Node::getData() const{
	return data;
}

Node *Node::getLink() const{
	return link;
}

void Node::setData(int value){
	data = value;
}

void Node::setLink(Node *next){
	link = next;
}
//End: should be in .c file

using namespace std;

void head_insert(NodePtr &head, int the_number){
	NodePtr temp_ptr;
	temp_ptr = new Node(the_number, head);
	head = temp_ptr;
}

int main(int argc, char *argv[])
{
	NodePtr head, temp;

	//Initialize
	head = new Node(0, NULL);
	for (int i = 1; i < 5; i++) {
		head_insert(head, i);
	}

	//Iterate to print
	temp = head;
	while (temp != NULL) {
		cout << temp->getData() << endl;
		temp = temp->getLink();
	}

	//Delete
	temp = head;
	while (temp != NULL) {
		NodePtr nodeToDelete = temp;
		temp = temp->getLink();
		delete nodeToDelete;
	}

	return 0;
}

