#pragma once
#include <iostream>
#include <cmath>
#include <ctime>
#include "Functions.h"
void/*s1*/sum_of_squares(int size) 
{
	double* arr = fill_double_array(size);
	PrintArray(arr, size);
	std::cout << SumArray(arr, size);
	delete[]arr;
}
void/*s2*/prod_of_squares(int size) 
{
	double* arr = fill_double_array(size);
	PrintArray(arr, size);
	std::cout << ProdArray(arr,size);
	delete[]arr;
}
void/*s3*/avg_of_squares(int size)
{
	double* arr = fill_double_array(size);
	PrintArray(arr, size);
	double avg = SumArray(arr, size) / size;
	std::cout << avg;
	delete[]arr;
}
void/*s4*/sum_and_prod_of_array(int size) 
{
	double* arr = fill_double_array(size);
	PrintArray(arr, size);
	std::cout << SumArray(arr, size);
	std::cout << std::endl << ProdArray(arr, size);
	delete[]arr;
}
void/*s5*/transformation_of_squares(int size) 
{
	int sum = 0;
	double* arr = fill_double_array(size);
	for (int i = 0; i < size; i++)
	{	
		double dec_part = *(arr+i) - static_cast<int>(*(arr+i));
		double int_part = *(arr+i) - dec_part;
		std::cout << int_part << " ";
		sum += int_part;
	}
	PrintArray(arr, size);
	std::cout << "\n" << sum;
	delete[]arr;
}
void/*s6*/prod_of_double_part(int size) 
{
	double* arr = fill_double_array(size);
	PrintArray(arr, size);
	for (int i = 0; i < size; i++)
	{
		*(arr + i) -= int(*(arr + i));
	}
	PrintArray(arr, size);
	ProdArray(arr, size);
	delete[] arr;
}
void/*s7*/round_array(int size) 
{
	double* arr = fill_double_array(size);
	PrintArray(arr, size);
	for (int i = 0; i < size; i++)
	{
		*(arr + i) = round(*(arr + i));
	}
	printf("Round Squares:");
	PrintArray(arr, size);
	std::cout << SumArray(arr, size);
	delete[]arr;
}
void/*s8*/even_numbers(int size) 
{
	int times = 0;
	int* arr = fill_int_array(size);
	PrintArray(arr, size);
	printf("Все четные числа: ");
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) % 2 == 0)
		{
			++times;
			std::cout << *(arr + i) << " ";
		}
	}
	std::cout << "\nКоличество чисел: " << times;
	delete[] arr;
}
void/*s9*/numbers_of_odd_array(int size) 
{
	int times = 0;
	int* arr = fill_int_array(size);
	PrintArray(arr, size);
	printf("Номера нечетных чисел: ");
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) % 2 == 1)
		{
			++times;
			std::cout << i << " ";
		}
	}
	std::cout << "\nКоличество чисел: " << times;
	delete[] arr;
}
bool/*s10*/check_positivity_of_array(int size) 
{
	int* arr = fill_negative_positive_array(size);
	PrintArray(arr, size);
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) > 0) {
			delete[]arr;
			std::cout << "true" << std::endl;
			return true;
		}
	}
	delete[] arr;
	return false;
}
bool/*s11*/check_array_numbers(int size) 
{
	int k = 5;
	int* arr = fill_int_array(size);
	PrintArray(arr, size);
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) < k) {
			delete[]arr;
			std::cout << "true" << std::endl;
			return true;
		}
	}
	delete[]arr;
	return false;
}
template<typename T>
int/*s12*/output_numbers_to_zero(T arr,int size) 
{
	int count = 0;
	for (int i = 0; i < size; i++) {
		//completion_sign_zero(arr);
		if (*(arr + i) == 0)
		{
			break;
		}
		++count;
	}
	return count;
}
template<typename T>
double/*s13*/sum_of_even_numbers_up_to_zero(T arr, int size) {
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (static_cast<int>(*(arr + i)) % 2 == 0)
		{
			sum += *(arr + i);
		}
		if (*(arr + i) == 0)
		{
			break;
		}
	}
	return sum;
}
template <typename T>
double/*s14*/number_of_numbers_less_than_value(T arr,int size,int value) {
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) < value) {
			++count;
		}
		if (*(arr + i) == 0)
		{
			break;
		}
	}
	return count;
}
template <typename T>
double/*s15*/output_first_number(T arr, int size, int value) {
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) < value) {
			return arr[i];
		}
		if (*(arr + i) == 0)
		{
			break;
		}
	}
	return 0;
}
template <typename T>
void/*s16*/output_last_number(T arr, int size, int value){
	for (int i = size - 1; i != 0; i--)
	{
		if (arr[i] < value) {
			std::cout << arr[i];
				break;
		}
		if (*(arr + i) == 0)
		{
			break;
		}
	}
}
template <class T>
void/*s17*/sort_numbers(T arr, int size, int value) {
	bubbleSort(arr, size);
	for (int i = 0; i < size; i++)
	{
		std::cout << value << " ";
		std::cout << *(arr + i) << std::endl;
	}
}
template <class T>
void/*s19*/output_numbers_less_than_left_number(T arr, int size) {
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i + 1) < *(arr + i)) {
			std::cout << *(arr + i) << " ";
			++count;
		}
	}
	std::cout << "\n" << count;
}
template <class T>
void/*s20*/output_numbers_less_than_right_number(T arr, int size) {
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) < *(arr + i + 1)) {
			std::cout << *(arr + i) << " ";
			++count;
		}
	}
	std::cout << "\n" << count;
}
template <class T>
bool/*s21*/checking_numbers_for_ascending(T arr, int size) {
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (*(arr+i) < *(arr + i + 1)) {
			count++;
		}
		if (count == size-1)
		{
			return true;
		}
	}
	return false;
}
template <class T>
double/*s22*/checking_numbers_for_decreasing(T arr, int size) {
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (checking_numbers_for_ascending(arr, size) == 0) {
			return 0;
		}
		else if (*(arr + i) < *(arr + i + 1)){
				return i+1;
		}
	}
}

