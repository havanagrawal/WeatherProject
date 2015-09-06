#ifndef LIST_H
#define LIST_H

#include "Node.h"
#include<string>

class List {
	public:
		List();
		List(Node* first);
		void addLast(Node* n);
		std::string print();
	
	private:
		Node* head;
};

#endif
