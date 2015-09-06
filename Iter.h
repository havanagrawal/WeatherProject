#ifndef ITER_H
#define ITER_H

#include "List.h"

class Iter {
	public:
		Iter(List &l);
		bool valid();
		Node* next();

	private:
		List l;
		Node* current;
};

#endif
