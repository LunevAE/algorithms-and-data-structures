#include <iostream>
#include <string>
#include "myDeque.h"

int main()
{
	myDeque deq = myDeque();

	std::string str;

	while (std::cin >> str){
		if (str == "push_back"){
			int value;
			std::cin >> value;
			deq.push_back(value);
		}

		if (str == "push_front"){
			int value;
			std::cin >> value;
			deq.push_front(value);
		}

		if (str == "pop_front") deq.pop_front();
		if (str == "pop_back") deq.pop_back();
		if (str == "size") deq.size();
		if (str == "front") deq.front();
		if (str == "back") deq.back();
		if (str == "clear") deq.clear();
		if (str == "exit") deq.exit();
	}

	return 0;
}