#include <vector>
#include <iostream>
#include "templates.h"

int main()
{
	int sum = 0;
	int prod = 1;
	std::vector<int> vec{ 15 };
	std::cout << tasks::SumNumbersOfDegree(vec.begin(), vec.end(), sum, 2) << std::endl;
	//std::cout << tasks::SumFibonacciNumbers(vec.begin(), vec.end(), sum) << std::endl;
	std::cout << tasks::DivisibleByValue(vec.begin(), vec.end(), sum, 5) << std::endl; // 2 6 7 8
	std::cout << tasks::DivisibleByTwoValues(vec.begin(), vec.end(), sum, 3 , 5) << std::endl; // 2 6 7 8
	tasks::getDivisorsOfValue(1, 5, 4);
	std::cout << std::endl;
	tasks::getDivisorsOfTwoValues(1, 5, 4, 6);
	std::cout << std::endl;
	tasks::getMultiplesOfTwoValues(1,20,2,4);
	std::cout << std::endl;
}
