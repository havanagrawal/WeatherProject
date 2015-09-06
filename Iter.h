#ifndef ITER_H
#define ITER_H

#include "List.h"


/*
 * An iterator class for an underlying List
 * The iterator is independent of the data stored inside Node
 */
class Iter {
	public:
		Iter(List &l);
		
		/* Returns true if elements are left in list
		 * Else return false
		 */
		bool valid();
		
		/* Return the next available element
		 */
		Node* next();

	private:
		List list;
		Node* current;
};

#endif
