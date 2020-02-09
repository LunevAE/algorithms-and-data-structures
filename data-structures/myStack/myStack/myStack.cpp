#include "myStack.h"
#include <iostream>

void myStack::push(int value)
{
	node *s = new node;
	s->value = value;
	if (top != nullptr) s->size = top->size;
	s->size++;
	s->next = top;
	top = s;
	std::cout << "ok" << std::endl;
}

void myStack::pop()
{
	if (top == nullptr) std::cout << "error" << std::endl;
	else {
		int temp = top->value;
		node *s = top;

		top = top->next;
		delete s;
		std::cout << temp << std::endl;
	}
}

void myStack::back()
{
	if (top == nullptr) std::cout << "error" << std::endl;
	else std::cout << top->value << std::endl;
}

void myStack::size()
{
	if (top != nullptr) std::cout << top->size << std::endl;
	else std::cout << 0 << std::endl;
}

void myStack::clear()
{
	while (top != nullptr) {
		node *s = top;
		top = top->next;
		delete s;
	}
	std::cout << "ok" << std::endl;
}

void myStack::exit()
{
	std::cout << "bye" << std::endl;
	std::exit(0);
}

myStack::~myStack()
{
}
