#pragma once
#include <iostream>
#include <cmath>

namespace mylib {
	template <class T, class Iterator>
	T accumulate(Iterator first, Iterator last, T result) {
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
		T sum = accumulate(first, last, result);
		int size = last - first;
		return sum / size;
	}
	template<class Iterator, class UnaryOperation>
	void for_each(Iterator first, Iterator last, UnaryOperation up) {
		for (; first != last; ++first)
		{
			up(*first);
		}
	}
}

namespace verify {
	template <class T>
	bool isPowerOfFive(T value) {
		while (value > 1) {
			if (value % 5 != 0) {
				return false;
			}
			value /= 5;
		}
		return value == 1;
	}
	template <class T>
	bool isFibonacciNumber(T first, T middle, T next) {
		if (next == middle + first) {
			return true;
		}
		return false;
	}
	bool isSquare(int value) {
		int root = sqrt(value);
		return root * root == value;
	}
	bool isPowerOfThree(int value) {
		int root = cbrt(value);
		return pow(root, 3) == value;
	}
}

namespace tasks {

	template <class Iterator, class T>
	T SumPowerOfFive(Iterator first, Iterator last, T sum) {
		for (; first != last; ++first)
		{
			if (verify::isPowerOfFive(*first)) {
				sum += *first;
			}
		}
		return sum;
	}
	template <class Iterator, class T>
	T SumFibonacciNumbers(Iterator first, Iterator last, T sum) {
		Iterator prev = first;
		Iterator curr = first; curr++;
		Iterator next = first; next++; next++;
		for (; next != last; prev++, curr++, next++)
		{
			if (verify::isFibonacciNumber(*prev, *curr, *next)) {
				sum += *curr;
			}
		}
		return sum;
	}
	template <class Iterator, class T>
	T SumSquareNumbers(Iterator first, Iterator last, T sum) {
		for (; first != last; ++first)
		{
			if (verify::isSquare(*first)) {
				sum += *first;
			}
		}
		return sum;
	}
	template <class Iterator, class T>
	T SumPowerOfThree(Iterator first, Iterator last, T sum) {
		for (; first != last; ++first)
		{
			if (verify::isPowerOfThree(*first)) {
				sum += *first;
			}
		}
		return sum;
	}
	template <class Iterator, class T>
	T DivisibleByValue(Iterator first, Iterator last, T sum, T value) { //2 6 7 8
		for (; first != last; first++)
		{
			if (*first % value == 0) {
				sum += *first;
			}
		}
		return sum;
	}
	template <class Iterator, class T>
	T DivisibleByTwoValue(Iterator first, Iterator last, T sum, T value, T value2) { // 9 10
		for (; first != last; first++)
		{
			if (*first % value == 0 && *first % value == 0) {
				sum += *first;
			}
		}
		return sum;
	}
}