#include "Iter.h"

Iter::Iter(List &l) {
	list = l;
	current = l.getFirst();
}

bool Iter::valid() {
	if (current == NULL) {
		return false;
	}
	return true;
}

Node* Iter::next() {
	if (valid()) {
		Node* p = current;
		current = current->getNext();
		return p;
	}
	return NULL;
}