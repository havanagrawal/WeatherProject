#ifndef LIST_H
#define LIST_H

#include "Node.h"
#include<string>


/*
 * A singly Linked List to store Nodes
 * List is independent of data stored inside Node
 */
class List {
	public:
		// Initialize empty list, head points to null
		List();
		List(Node* first);
		
		/*
		 * Returns a pointer to the starting node of the list
		 */
		Node* getFirst();
		
		/*
		 * Adds a node to the end of the list
		 */
		void addLast(Node* n);
		
		/*
		 * Returns a printable string format of the list
		 */
		std::string print();
	
	private:
		Node* head;
};

#endif
