/*
 * linkedList.hpp
 *
 */

#ifndef LINKEDLIST_HPP_
#define LINKEDLIST_HPP_

#include "lLists/node.hpp"

namespace eda {

class LinkedList {
private:
	Node* head;

public:
	LinkedList();
	void insertLast(int val);
	void insertFirst(int val);
	void removeFirst();
	void remove(int val);
	void removeAll();
	int pos(int val);
	Node* find_val_pos(int val);
	Node* find(int val);
	void print();
	virtual ~LinkedList();
	int size();
};

} /* namespace eda */

#endif /* LINKEDLIST_HPP_ */
