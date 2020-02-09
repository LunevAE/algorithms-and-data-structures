#include <iostream>
#include "myDeque.h"

void myDeque::push_front(int value)
{
	node *deq = new node;
	deq->value = value;

	if (head == nullptr) {
		deq->next = deq->prev = nullptr;
		head = tail = deq;
	}
	else {
		head->prev = deq;
		deq->next = head;
		deq->prev = nullptr;
		head = deq;
	}
	std::cout << "ok" << std::endl;
}

void myDeque::push_back(int value)
{
	node *deq = new node;
	deq->value = value;

	if (head == nullptr) {
		deq->next = deq->prev = nullptr;
		head = tail = deq;
	}
	else {
		tail->next = deq;
		deq->prev = tail;
		deq->next = nullptr;
		tail = deq;
	}
	std::cout << "ok" << std::endl;
}

void myDeque::pop_front()
{
	if (isEmpty()) std::cout << "error" << std::endl;
	else {
		if (head == tail) {
			std::cout << head->value << std::endl;
			head = tail = nullptr;
		}
		else {
			std::cout << head->value << std::endl;
			node *deq = head;

			head = head->next;
			head->prev = nullptr;
			delete deq;
		}
	}
}

void myDeque::pop_back()
{
	if (isEmpty()) std::cout << "error" << std::endl;
	else {
		if (head == tail) {
			std::cout << tail->value << std::endl;
			head = tail = nullptr;
		}
		else {
			std::cout << tail->value << std::endl;
			node *deq = tail;

			tail = tail->prev;
			tail->next = nullptr;
			delete deq;
		}
	}
}

void myDeque::front()
{
	if (isEmpty()) std::cout << "error" << std::endl;
	else std::cout << head->value << std::endl;
}

void myDeque::back()
{
	if (isEmpty()) std::cout << "error" << std::endl;
	else std::cout << tail->value << std::endl;
}

bool myDeque::isEmpty()
{
	if (head == nullptr && tail == nullptr) return true;
	else return false;
}

void myDeque::size()
{
	node *deq = head;
	while (deq != nullptr) {
		count++;
		deq = deq->next;
	}
	std::cout << count << std::endl;
	count = 0;
}

void myDeque::clear()
{
	while (tail != nullptr && head != nullptr) {
		if (head == tail)head = tail = nullptr;
		else {
			node *deq = head;

			head = head->next;
			delete deq;
		}
	}
	std::cout << "ok" << std::endl;
}

void myDeque::exit()
{
	std::cout << "bye" << std::endl;
	std::exit(0);
}

myDeque::~myDeque()
{
}
