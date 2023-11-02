#include <vector>
#include <iostream>
#include <algorithm>

namespace ml {
	template<class Iterator, class T>
	T acumulate(Iterator first, Iterator last, T result) {
		for (; first != last; ++first)
		{
			result += *first;
		}
		return result;
	}
	template<class Iterator, class T, class BinaryOperation>
	T acumulate(Iterator first, Iterator last, T result, BinaryOperation bp) {
		for (; first != last; ++first)
		{
			result = bp(result, *first);
		}
		return result;
	}
	template<class Iterator, class T>
	T avg(Iterator first, Iterator last, T result) {
		T sum = acumulate(first, last, result);
		int size = last - first;
		return sum / size;
	}
	template<class Iterator>
	void series_4(Iterator first, Iterator last) {
		std::cout << ml::acumulate(first, last, 0, [](int a, int b) {return a + b; }) << std::endl;
		std::cout << ml::acumulate(first, last, 1, [](int a, int b) {return a * b; }) << std::endl;
	}
	template<class Iterator, class UnaryOperation>
	void for_each(Iterator first, Iterator last, UnaryOperation up) {
		for (; first != last; ++first)
		{
			up(*first);
		}
	}
}

