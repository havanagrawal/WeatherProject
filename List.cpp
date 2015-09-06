#include "List.h"
#include "Node.h"
#include<string>
#include<sstream>

List::List() {
	head = NULL;
}

List::List(Node* first) {
	head = first;
}

Node* List::getFirst() {
	return head;
}

void List::addLast(Node* n) {
	
	if (head == NULL) {
		head = n;
		return;
	}
	
	Node* temp = head;
	while (temp->getNext() != NULL) {
		temp = temp->getNext();
	}
	temp->setNext(n);
}

std::string List::print() {
	
	std::stringstream stream;
	
	Node* temp = head;
	while (temp->getNext() != NULL) {
		stream << temp->toString();
		temp = temp->getNext();
	}
	return stream.str();
}