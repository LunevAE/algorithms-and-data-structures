#include <iostream>
#include <string>
#include "myStack.h"

int main()
{
	myStack s = myStack();
	std::string str;

	while (std::cin >> str) {
		if (str == "push") {
			int value;
			std::cin >> value;
			s.push(value);
		}
		if (str == "pop") s.pop();
		if (str == "size") s.size();
		if (str == "back") s.back();
		if (str == "clear") s.clear();
		if (str == "exit") s.exit();
	}

	return 0;
}