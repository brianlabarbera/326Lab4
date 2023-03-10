#include "LinkedList.h"
#include <iostream>



LinkedList::~LinkedList() {

	Node* temp;

	while (head) {
		temp = head;
		head = head->Next;
		
		delete temp;
	}

}


bool LinkedList::SortedIsEmpty() {

	return !head;

}
