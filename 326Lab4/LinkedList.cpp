#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList() {

	head = NULL;
	size = 0;
}

LinkedList::~LinkedList() {

	Node* temp;

	while (head) {
		temp = head;
		head = head->Next;
		
		delete temp;
	}

}

void LinkedList::printAll() {

	Node* temp;

	temp = head;

	std::cout << std::endl;

	while (temp) {
		
		std::cout << temp->Data << std::endl;

		temp = temp->Next;
	}

	std::cout << std::endl;

}

LinkedList::Node* LinkedList::GetK(int k) {

	Node* temp;

	temp = head;

	if (k < 1) {
		return head;
	}

	for (int i = 1; i < k && temp; i++) {

		temp = temp->Next;

		return temp;
	}

}

bool LinkedList::SortedIsEmpty() {

	return !head;

}


int LinkedList::SortedGetLength() {

	return size;

}

bool LinkedList::SortedFind(int k, int& x) {

	if (k < 1) {
		return false;
	}

	Node* temp = GetK(k);

	if (temp) {

		x = temp->Data;

		return true;
	}

	else {
		return false;
	}


}


int LinkedList::SortedSearch(int key) {

	Node* temp = head;

	for (int i = 0; temp; i++) {

		if (!temp) {
			return 0;
		}

		if (temp->Data == key) {
			return i;
		}

		temp = temp->Next;

	}

	std::cout << std::endl;

}

void LinkedList::SortedInsertD(int x) {

	size++;

	Node* newNode = new Node;

	newNode->Data = x;

	if (head == NULL || head->Data >= newNode->Data) {

		if (head && head->Data == x) {
			return;
		}

		newNode->Next = head;
		head = newNode;
		return;
	}

	Node* temp = head;

	while (temp->Next != NULL && temp->Next->Data < newNode->Data) {

		temp = temp->Next;

	}

	if (temp->Next && temp->Next->Data == x) {
		return;
	}


	newNode->Next = temp->Next;
	temp->Next = newNode;
}

void LinkedList::SortedInsert(int x) {

	size++;

	Node* newNode = new Node;

	newNode->Data = x;

	if (head == NULL || head->Data >= newNode->Data) {
		newNode->Next = head;
		head = newNode;
		return;
	}

	Node* temp = head;

	while (temp->Next != NULL && temp->Next->Data < newNode->Data) {

		temp = temp->Next;

	}
	newNode->Next = temp->Next;
	temp->Next = newNode;
	
}

void LinkedList::SortedDelete(int k, int& x, bool& success) {

	success = k <= size && k >= 1;

	if (success) {

		Node* temp;
		Node* prev;

		temp = head;
		prev = head;

		for (int i = 0; i < k; i++) {
			
			if (i == 0 && k == 1) {
				
				head = head->Next;
				x = temp->Data;
				free(temp);
			}

			else {
				if (i == k - 1 && temp) {
					prev->Next = temp->Next;
					x = temp->Data;
					free(temp);
				}

				else {
					prev = temp;

					if (prev == NULL) {
						break;
					}

					temp = temp->Next;

				}


			}
		}

	}

}