#include <iostream>
#include "myList.h"

int main()
{
	myList<int> lst;
	int count;
	std::cout << "Enter size list: ";
	std::cin >> count;
	std::cout << "###############################\n";

	std::cout << "Random push_back:" << std::endl;
	for (int i = 0; i < count; i++)
	{
		lst.push_back(rand() % 10);
	}

	for (int i = 0; i < lst.GetSize(); i++)
	{
		std::cout << lst[i] << std::endl;
	}
	std::cout << "###############################\n";
	
	std::cout << "pop_front:" << std::endl;
	lst.pop_front();

	for (int i = 0; i < lst.GetSize(); i++)
	{
		std::cout << lst[i] << std::endl;
	}
	std::cout << "###############################\n";

	std::cout << "clear list and GetSize:" << std::endl;
	lst.clear();
	std::cout << lst.GetSize() << std::endl;
	std::cout << "###############################\n";

	std::cout << "push_front:" << std::endl;
	lst.push_front(111);
	lst.push_front(112);
	lst.push_front(113);
	for (int i = 0; i < lst.GetSize(); i++)
	{
		std::cout << lst[i] << std::endl;
	}
	std::cout << "###############################\n";

	std::cout << "pop_back:" << std::endl;
	lst.pop_back();
	lst.pop_back();
	lst.pop_back();
	lst.pop_back();
	for (int i = 0; i < lst.GetSize(); i++)
	{
		std::cout << lst[i] << std::endl;
	}
	std::cout << "###############################\n";

	std::cout << "Random push_back:" << std::endl;
	for (int i = 0; i < count; i++)
	{
		lst.push_back(rand() % 10);
	}

	for (int i = 0; i < lst.GetSize(); i++)
	{
		std::cout << lst[i] << std::endl;
	}
	std::cout << "###############################\n";

	std::cout << "insert 10,2:" << std::endl;
	lst.insert(10, 2);

	for (int i = 0; i < lst.GetSize(); i++)
	{
		std::cout << lst[i] << std::endl;
	}
	std::cout << "###############################\n";
	
	std::cout << "removeAt 2:" << std::endl;
	lst.removeAt(2);
	for (int i = 0; i < lst.GetSize(); i++)
	{
		std::cout << lst[i] << std::endl;
	}
	std::cout << "###############################\n";

	return 0;
}