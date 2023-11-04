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
	bool isPowerNumber(T value ,T degree) {
		while (value > 1) {
			if (value % degree != 0) {
				return false;
			}
			value /= degree;
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
}

namespace tasks {
	//2.1
	template <class Iterator, class T>
	T SumNumbersOfDegree(Iterator first, Iterator last, T sum, T degree) { // 1 4 5
		for (; first != last; ++first)
		{
			if (verify::isPowerNumber(*first, degree)) {
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
	T DivisibleByTwoValues(Iterator first, Iterator last, T sum, T value, T value2) { // 9 10
		for (; first != last; first++)
		{
			if ((*first % value == 0) && (*first % value2 == 0)) {
				sum += *first;
			}
		}
		return sum;
	}
	//2.2
	template<class T, class Iterator>
	void CalculationOfConditionalFunction(Iterator begin, Iterator end, T step, T value, T valueX, T result) {
		for (; begin != end; begin += step)
		{
			if (valueX <= 2.8)
			{
				result = (value - 0.39) / (exp(begin) + cos(begin));
			}
			else if (valueX < 6)
			{
				result = (value - 0.39) / (begin + 1);
			}
			else
			{
				result = exp(begin) + sin(begin);
			}
			std::cout << begin << "\t|\t" << result << std::endl;
		}
	}
	//2.3
	template <class T>
	void getDivisorsOfValue(T begin, T end, T value) {//1
		for (; begin!=end; ++begin )
		{
			if (value % begin == 0) {
				std::cout << begin << " ";
			}
		}
	}
	template <class T>
	void getDivisorsOfTwoValues(T begin, T end, T value, T value2) {//2
		for (; begin!=end; ++begin )
		{
			if ((value % begin == 0) && (value2 % begin == 0)) {
				std::cout << begin << " ";
			}
		}
	}
	template <class T>
	void getMultiplesOfTwoValues(T begin, T end, T value, T value2) {//3
		for (; begin!=end; ++begin )
		{
			if ((begin % value == 0) && (begin % value2 == 0)) {
				if (begin < value * value2) {
					std::cout << begin << " ";
				}
			}
		}
	}
	template <class T>
	T greatestCommonDivisor(T value, T value2) {//4
		while (value2 != 0) {
			T t = value2;
			value2 = value % value2;
			value = t;
		}
		return value;
	}
	template <class T>
	T smallestCommonMultiples(T value, T value2) {//5
		return value * value2 / tasks::greatestCommonDivisor(value, value2);
	}
}