#include <iostream>
#include "myQueue.h"

void myQueue::push(int value)
{
	node *q = new node;
	q->value = value;
	q->next = nullptr;

	if (tail != nullptr){
		q->size = tail->size;
	}
	q->size++;

	if (head == nullptr) head = tail = q;
	else {
		tail->next = q;
		tail = q;
	}
	std::cout << "ok" << std::endl;
}

void myQueue::pop()
{
	if (isEmpty()) std::cout << "error" << std::endl;
	else {
		if (head == tail) {
			std::cout << head->value << std::endl;
			head = tail = nullptr;
		}
		else {
			std::cout << head->value << std::endl;
			node *q = head;

			head = head->next;
			tail->size--;
			delete q;
		}
	}
}

void myQueue::front()
{
	if (isEmpty()) std::cout << "error" << std::endl;
	else std::cout << head->value << std::endl;
}

bool myQueue::isEmpty()
{
	if (head == nullptr && tail == nullptr) return true;
	else return false;
}

void myQueue::clear()
{
	while (tail != nullptr && head != nullptr) {
		if (head == tail) {
			head = tail = nullptr;
		}
		else {
			node *q = head;

			head = head->next;
			tail->size--;
			delete q;
		}
	}
	std::cout << "ok" << std::endl;
}

void myQueue::size()
{
	if (tail != nullptr) std::cout << tail->size << std::endl;
	else std::cout << 0 << std::endl;
}

void myQueue::exit()
{
	std::cout << "bye" << std::endl;
	std::exit(0);
}


myQueue::~myQueue()
{
}
