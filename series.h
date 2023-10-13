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
	std::cout << "k = " << k << std::endl;
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
//void/*s12*/output_numbers(int size) 
// {
//	int* arr = fill_int_array(size);
//	for (int i = 0; i < size; i++)
//	{
//
//	}
//}