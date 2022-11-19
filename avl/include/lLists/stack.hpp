/*
 * stack.hpp
 *
 *  Created on: Aug 18, 2022
 *      Author: jsaavedr
 */

#ifndef STACK_HPP_
#define STACK_HPP_

#include "lLists/node.hpp"

namespace eda {

class Stack {
private:
	Node* head;
public:
	Stack();
	void push(int val);
	void push(Node* node);
	void pop();
	void min_heap();
	Node* top();
	bool isEmpty();
	void clear();
	virtual ~Stack();
};

} /* namespace eda */

#endif /* STACK_HPP_ */
