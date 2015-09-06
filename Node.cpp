#include "Weather.h"
#include "Node.h"
#include <string>

Node::Node(Weather w) {
	wt = w;
	next = NULL;
}

Node* Node::getNext() const{
	return next;
}

void Node::setNext(Node* p) {
	next = p;
}

Weather Node::getData() const {
	return wt;
}

std::string Node::toString() const{
	return wt.toString();
}
