#include <iostream>
#include "LinkedList.h"


int main() {

	LinkedList List;

	List.SortedInsertD(5);
	List.SortedInsertD(7);
	List.SortedInsertD(9);
	List.SortedInsertD(11);
	List.SortedInsertD(5);
	List.SortedInsertD(7);
	List.printAll();


	return 0;
}