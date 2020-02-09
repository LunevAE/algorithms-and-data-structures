#include <iostream>
#include <string>
#include "myQueue.h"

int main()
{
	myQueue q = myQueue();

	std::string str;

	while (std::cin >> str) {
		if (str == "push") {
			int value;
			std::cin >> value;
			q.push(value);
		}
		if (str == "pop") q.pop();
		if (str == "size") q.size();
		if (str == "front") q.front();
		if (str == "clear") q.clear();
		if (str == "exit") q.exit();
	}

	return 0;
}