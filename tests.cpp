// Test definitions. Do NOT edit this file!
#define CATCH_CONFIG_MAIN // defines main() automatically
#include <iostream>
#include "catch.hpp"
#include "main.hpp"
// tests for exercise 1
TEST_CASE("Ex1 insertVector() ", "[example]")
{
	const int SIZE = 10;
	int usernum, idx;
	vector<int> number(10);

	makeVector(number);
	printVector(number);
	usernum = 15;
	for (int i = 0; i < number.size(); i++)
	{
		if (number[i] > usernum)
		{
			idx = i;
			break;
		}
	}
	insertVector(number, usernum);
	printVector(number);

	REQUIRE(number[idx] == usernum);
}
// tests for exercise 2
TEST_CASE("Ex2 deleteVector()", "[example]")
{
	const int SIZE = 10;
	int usernum, idx, result, size;
	vector<int> number(10);
	vector<int>::iterator iter;

	makeVector(number);
	printVector(number);
	usernum = 15;
	iter = find(number.begin(), number.end(), usernum);
	size = number.size();

	result = deleteVector(number, usernum);
	printVector(number);

	if (iter != number.end())
	{
		idx = distance(number.begin(), iter);
		REQUIRE(number[idx] != usernum);
		REQUIRE(number.size() == size - 1);
	}
	else
	{
		REQUIRE(result == -1);
		REQUIRE(number.size() == size);
	}
}