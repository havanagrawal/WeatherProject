#ifndef NODE_H
#define NODE_H

#include "Weather.h"
#include <string>

class Node {
	
	public:	
		Node(Weather w);
		Node* getNext() const;
		void setNext(Node* n);
		Weather getData() const;
		std::string toString() const;
		
	private:
		Weather wt;
		Node* next;
};

#endif
