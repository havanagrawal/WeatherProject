#ifndef NODE_H
#define NODE_H

#include "Weather.h"
#include <string>

/*
 * Represents a Node that encapsulates Weather data
 */
class Node {
	
	public:	
		Node(Weather w);
		
		/*
		 * Returns a pointer to the Node this Node points to
		 */
		Node* getNext() const;
		
		/*
		 * Makes this Node point to another Node
		 */
		void setNext(Node* n);
		
		/*
		 * Returns a copy of the encapsulated object
		 */
		Weather getData() const;
		
		/*
		 * Returns a printable string format of the encapsulated data
		 */
		std::string toString() const;
		
	private:
		Weather wt;
		Node* next;
};

#endif
