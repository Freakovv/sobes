#pragma once
#include <iostream>
#include <cmath>
#include <ctime>
#include "Functions.h"
void/*s1*/sum_of_squares(int size) {
	double* arr = fill_double_array(size);
	PrintArray(arr, size);
	std::cout << SumArray(arr, size);
	delete[]arr;
}
void/*s2*/prod_of_squares(int size) {
	double* arr = fill_double_array(size);
	PrintArray(arr, size);
	std::cout << ProdArray(arr,size);
	delete[]arr;
}
void/*s3*/avg_of_squares(int size) {
	double* arr = fill_double_array(size);
	PrintArray(arr, size);
	double avg = SumArray(arr, size) / size;
	std::cout << avg;
	delete[]arr;
}
void/*s4*/sum_and_prod_of_array(int size) {
	double* arr = fill_double_array(size);
	PrintArray(arr, size);
	std::cout << SumArray(arr, size);
	std::cout << std::endl << ProdArray(arr, size);
	delete[]arr;
}
void/*s5*/transformation_of_squares(int size) {
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
void/*s6*/prod_of_double_part(int size) {
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
void/*s7*/round_array(int size) {
	double* arr = fill_double_array(size);
	PrintArray(arr, size);
	for (int i = 0; i < size; i++)
	{
		*(arr + i) = round(*(arr + i));
	}
	printf("Round Squares:");
	PrintArray(arr, size);
	SumArray(arr, size);
	delete[]arr;
}
void series8() {
	int size, times = 0;
	std::cout << "Введите кол-во элементов в наборе\t";
	std::cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		std::cout << "Введите " << i << " элемент набора : \t";
		std::cin >> *(arr + i);
	}
	printf("Все четные числа: ");
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) % 2 == 0) {
			std::cout << *(arr + i) << " ";
			times += 1;
		}
	}
	std::cout << "\nКоличество чисел: " << times;
	delete[] arr;
}
void series9() {
	int size, times = 0;
	std::cout << "Введите кол-во элементов в наборе\t";
	std::cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		std::cout << "Введите " << i << " элемент набора : \t";
		std::cin >> *(arr + i);
	}
	printf("Номера нечетных чисел: ");
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) % 2 == 1) {
			std::cout << i << " ";
			times += 1;
		}
	}
	std::cout << "\nКоличество чисел: " << times;
	delete[] arr;
}
void/*bool*/ series10() {
	int size;
	int y;
	std::cout << "Введите кол-во элементов в наборе\t";
	std::cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		std::cout << "Введите " << i << " элемент набора : \t";
		std::cin >> *(arr + i);
		if (*(arr + i) > 0) {
			y = 1;
		}
		else {
			y = 0;
		}
	}
	if (y == 1) {
		//y=true;
		std::cout << "true";
	}
	else {
		//y=false;
		std::cout << "false";
	}
	//return y;
	delete[] arr;
}
void series11() {
	int w;
	std::cout << "Введите число k:\t";
	int k;
	std::cin >> k;
	std::cout << "Введите кол-во элементов в наборе\t";
	int size;
	std::cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		std::cout << "Введите " << i << " элемент набора : \t";
		std::cin >> *(arr + i);
		if (*(arr + i) < k) {
			w = 1;
		}
		else {
			w = 0;
		}
	}
	if (w == 1) {
		std::cout << "true";
	}
	else if (w == 0) {
		std::cout << "false";
	}
	delete[] arr;
}