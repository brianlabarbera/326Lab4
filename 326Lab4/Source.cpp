#include <iostream>
#include "LinkedList.h"


int main() {
	int x = 0;
	bool success;

	LinkedList List;

	List.SortedInsert(5);
	List.SortedInsert(7);
	List.SortedInsert(9);
	List.SortedInsert(11);
	List.SortedInsert(5);
	List.printAll();
	std::cout << List.SortedFind(3, x) << std::endl;
	std::cout << std::endl;
	std::cout << List.SortedSearch(7) << std::endl;
	List.printAll();
	List.SortedDelete(2, x, success);
	List.printAll();
	List.SortedSearch(7);


	return 0;
}