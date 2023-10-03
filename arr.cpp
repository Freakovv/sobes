#include <iostream>
#include <cmath>
//void series1() {
//	int size = 10;
//	int *arr = new int(size);
//	std::cout << "Введите десять вещественных чисел\n";
//	int sum=0;
//	for (int i = 0; i < size; i++)
//	{
//		std::cin >> *arr;
//	}
//	for (int i = 0; i < size; i++) {
//	
//		sum += *(arr+i);
//	}
//	std::cout << sum;
//	delete [] arr;
//}
void series1() {
	const int size = 17;
	int arr[size], sum = 0;
	for (int i = 0; i < size; i++)
	{
		std::cout << "Введите элемент массива:\t";
		std::cin >> arr[i];
		sum += arr[i];
	}
	std::cout << sum;
}
void series2() {
	const int size = 10;
	int arr[size], prod = 1;
	for (int i = 0; i < size; i++)
	{
		std::cout << "Введите элемент массива:\t";
		std::cin >> arr[i];
		prod *= arr[i];
	}
	std::cout << prod;
}
void series3() {
	const int size = 10;
	int arr[size], sum = 0;
	for (int i = 0; i < size; i++)
	{
		std::cout << "Введите элемент массива:\t";
		std::cin >> arr[i];
		sum += arr[i];
	}
	std::cout << sum / size;
}
void series4() {
	int size, sum = 0, prod = 1;
	std::cout << "Введите кол-во элементов в наборе\t";
	std::cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		std::cout << "Введите " << i + 1 << " элемент набора : \t";
		std::cin >> *(arr + i);
		sum += *(arr + i);
		prod *= *(arr + i);
	}
	std::cout << "Сумма элементов массива:\t" << sum << std::endl;
	std::cout << "Произведение элементов массива:\t" << prod << std::endl;
	delete[] arr;
}
bool is_fractional(int value) {
	return (value % 10) == 0;

}
double fractional(int value) {
	return value / 10;

}
void series5() { // ????
	int size, sum_of_int = 0;
	std::cout << "Введите кол-во элементов в наборе:\t";
	std::cin >> size;
	float* arr = new float[size];
	double* arr1 = new double[size];
	int i = 0;
	for (; i < size; i++)
	{
		std::cout << "Введите " << i << " элемент набора :\t";
		std::cin >> *(arr + i);
		is_fractional(*(arr + i)) ? sum_of_int += *(arr + i)
			: *(arr1 + i) = *(arr + i); // cout massiv
		if (float(*(arr + i)) == int(*(arr + i))) // sum_of_int_squares
		{
			sum_of_int += *(arr + i);
		}
	}
	std::cout << "Целые числа: ";
	for (int i = 0; i < size; i++)
	{
		std::cout << (*(arr1 + i)) << " ";
	}
	std::cout << "\n" << "Сумма целых чисел: " << sum_of_int << "\n";
	delete[] arr;
}
void series6() {
	int size;
	std::cout << "Введите кол-во элементов в наборе\t";
	std::cin >> size;
	float* arr = new float[size];
	for (int i = 0; i < size; i++)
	{
		std::cout << "Введите " << i << " элемент набора : \t";
		std::cin >> *(arr + i);
		*(arr + i) -= int(*(arr + i));
	}
	std::cout << "Дробные части набора: ";
	for (int i = 0; i < size; i++)
	{
		std::cout << *(arr + i) << " ";

	}
	std::cout << "\n";
	for (int i = 0; i < size; i++)
	{
		*(arr + i) *= (*(arr + i + 1));
	}
	std::cout << "Произведение дробных частей: " << *arr;
	delete[] arr;
}
void series7() {
	int size, sum = 0;
	std::cout << "Введите кол-во элементов в наборе\t";
	std::cin >> size;
	float* arr = new float[size];
	for (int i = 0; i < size; i++)
	{
		std::cout << "Введите " << i << " элемент набора : \t";
		std::cin >> *(arr + i);
	}
	printf("\nОкругленные числа: ");
	for (int i = 0; i < size; i++)
	{
		std::cout << round(*(arr + i)) << " ";
		sum += *(arr + i);
	}
	std::cout << "\nСумма округленных чисел: " << sum;
}
void series8() {
	int size, times=0;
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
}
//void series11() {
//	int size;
//	std::cout << "Введите кол-во элементов в наборе\t";
//	std::cin >> size;
//	int** arr = new int[size];
//	for (int i = 0; i < size; i++)
//	{
//		std::cout << "Введите " << i << " элемент набора : \t";
//		std::cin >> *(arr + i);
//	}
//}
int main() {
	setlocale(LC_ALL, "ru");
	//series1();
	//series2();
	//series3();
	//series4();
	//series6();
	//series7();
	//series8();
	//series9();
	//series10();

}