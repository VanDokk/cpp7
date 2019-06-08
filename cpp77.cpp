#include "pch.h"
#include <iostream>
#include <queue>
#include <cstdlib>
#include <ctime>

int main()
{	
	std::queue<int> queue_first, queue_second, queue_result;
	
	int size_first, size_second;
	std::cout << "Enter size of queue_first: ";
	std::cin >> size_first;
	std::cout << "Enter size of queue_second: ";
	std::cin >> size_second;


	for (int i = 0; i < size_first; i++)
	{
		queue_first.push(i + 3);
	}


	for (int i = 0; i < size_second; i++)
	{
		queue_second.push(i + 9);
	}

	while (!queue_first.empty() && !queue_second.empty())
	{
		if (queue_first.front() <= queue_second.front())
		{
			queue_result.push(queue_first.front());
			queue_first.pop();
		}
		else
		{
			queue_result.push(queue_second.front());
			queue_second.pop();
		}
	}

	if (queue_first.empty())
	{
		while (!queue_second.empty())
		{
			queue_result.push(queue_second.front());
			queue_second.pop();
		}
	}
	else
	{
		while (!queue_first.empty())
		{
			queue_result.push(queue_first.front());
			queue_first.pop();
		}
	}
	
	
	std::cout << std::endl << std::endl << "first member: " << queue_result.front() << "|last member: " << queue_result.back() << "|size: " << queue_result.size() <<std::endl << std::endl;

}


