#include <iostream>
#include <vector>
#include <algorithm>
#include "Functions.h"


int main()
{
	std::vector<int> vec{ 1, 2, 3 };
	//std::cout << ml::acumulate(vec.begin(), vec.end(), 0, [](int a, int b)
	//	{return a + b; }) << std::endl;
	//std::cout << ml::avg(vec.begin(), vec.end(), 0) << std::endl;
	//int sum = 0;
	//double sum1 = 0;
	//ml::for_each(vec.begin(), vec.end(), [&sum, &sum1](double value)
	//{std::cout << static_cast<int>(value) << " ";
	//std::cout << value - static_cast<int>(value) << " ";
	//sum += value;
	//sum1 += value - static_cast<int>(value); });
	//std::cout << std::endl;
	//ml::for_each(vec.begin(), vec.end(), [](int& value)
	//	{value = std::round(value);
	//std::cout << value; });
	//sum = 0;
	//std::cout << std::endl;
	//ml::for_each(vec.begin() , vec.end() , [&sum](int value)
	//	{if (value % 2 == 0) {
	//	std::cout << value << " ";
	//}; });
}