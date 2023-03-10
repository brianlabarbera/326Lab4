#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class LinkedList {

public:
	LinkedList();
	~LinkedList();
	bool SortedIsEmpty();
	int SortedGetLength();
	bool SortedFind(int k, int& x);
	int SortedSearch(int key);
	void SortedInsert(int x);
	void SortedDelete(int k, int& x, bool& success);

private:
	struct Node {

		int Data;
		Node* Next;
	};
	Node* head;
	int size;

};

#endif