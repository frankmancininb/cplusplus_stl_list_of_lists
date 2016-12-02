// ConsoleApplication10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <algorithm>
#include <iostream>
#include <list>

int main()
{
	// Create a list containing integers
	std::list<int> l = { 7, 5, 16, 8 };

	// Add an integer to the front of the list
	l.push_front(25);
	// Add an integer to the back of the list
	l.push_back(13);

	// Insert an integer before 16 by searching
	auto it = std::find(l.begin(), l.end(), 16);
	if (it != l.end()) {
		l.insert(it, 42);
	}
	//for (auto it = myvector->begin(); it != myvector->end(); ++it)
	for (auto itt = l.begin(); itt != l.end(); itt++) {
		std::cout << *itt << '\n';
	}

	// Iterate and print values of the list
	for (int n : l) {
		std::cout << n << '\n';
	}

	std::list<int> l{ 1,2,3,4 };
	std::list<int> l1{ 5,6,7,8 };
	std::list<std::list<int>> ll;
	ll.push_back(l);
	ll.push_back(l1);
	std::list<std::list<int>>::iterator itr;
	for (itr = ll.begin(); itr != ll.end(); itr++)
	{
		std::list<int>tl = *itr;
		std::list<int>::iterator it;
		for (it = tl.begin(); it != tl.end(); it++)
		{
			std::cout << *it;
		}
		std::cout << std::endl << "End" << endl;
	}
}