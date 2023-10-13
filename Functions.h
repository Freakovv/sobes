#pragma once
#include <iostream>
#include <cmath>
#include <ctime>
bool is_fractional(int value) {
	return (value % 10) == 0;

}
double fractional(int value) {
	return value / 10;
}
int* fill_int_array(int size) {
	int* arr = new int[size];
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		*(arr + i) = rand() % 10 + 1;
	}
	return arr;
}
double* fill_double_array(int size) {
	srand(time(NULL));
	double* array = new double[size];
	for (int i = 0; i < size; i++)
	{
		double decimalPart = (rand() % 10) / 10.0;
		array[i] = static_cast<double>(rand() % 10 + 1) + decimalPart;
	}
	return array;
}
int* fill_negative_positive_array(int size) {
	int* arr = new int[size];
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		*(arr + i) = (rand() % 20) - 10;
	}
	return arr;
}
double ProdArray(double* arr, int size) {
	double prod = 1;
	for (int i = 0; i < size; i++)
	{
		prod *= arr[i];
	}
	return prod;
}
double SumArray(double* arr, int size) {
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum;
}
template <typename T>
void PrintArray(T* arr, int size) {
	for (int i = 0; i < size; i++)
	{
		std::cout << *(arr+i) << " ";
	}
	std::cout << std::endl;
}