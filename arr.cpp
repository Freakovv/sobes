#include <iostream>
#include <cmath>
//void series1() {
//	int size = 10;
//	int *arr = new int(size);
//	std::cout << "������� ������ ������������ �����\n";
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
	const int size=17;
	int arr[size],sum=0;
	for (int i = 0; i < size; i++)
	{
	std::cout << "������� ������� �������:\t";
	std::cin >> arr[i];
	sum += arr[i];
	}
	std::cout << sum;
}
void series2() {
	const int size = 10;
	int arr[size],prod=1;
	for (int i = 0; i < size; i++)
	{
		std::cout << "������� ������� �������:\t";
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
		std::cout << "������� ������� �������:\t";
		std::cin >> arr[i];
		sum += arr[i];
	}
	std::cout << sum / size;
}
void series4() {
	int size,sum=0,prod=1;
	std::cout << "������� ���-�� ��������� � ������\t";
	std::cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		std::cout << "������� " << i+1 << " ������� ������ : \t";
		std::cin >> *(arr+i);
		sum += *(arr + i);
		prod *= *(arr + i);
	}
	std::cout << "����� ��������� �������:\t" << sum << std::endl;
	std::cout << "������������ ��������� �������:\t" << prod << std::endl;
	delete[] arr;
}
bool is_fractional(int value) {
	return (value % 10) == 0;

}
double fractional(int value) {
	return value / 10;

}
void series5() { // ????
	int size,sum_of_int=0;
	std::cout << "������� ���-�� ��������� � ������:\t";
	std::cin >> size;
	float* arr = new float[size];
	double* arr1 = new double[size];
	int i = 0;
	for (; i < size; i++)
	{
		std::cout << "������� " << i << " ������� ������ :\t";
		std::cin >> *(arr + i);
		is_fractional(*(arr + i)) ? sum_of_int += *(arr + i)
			: *(arr1 + i) = *(arr + i); // cout massiv
		if (float(*(arr + i)) == int(*(arr+i))) // sum_of_int_squares
		{
			sum_of_int += *(arr+i);
		}
	}
	std::cout << "����� �����: ";
	for (int i = 0; i < size; i++)
	{
		std::cout << (*(arr1 + i)) << " ";
	}
	std::cout << "\n" << "����� ����� �����: " << sum_of_int << "\n";
	delete[] arr;
}
void series6() {
	int size;
	std::cout << "������� ���-�� ��������� � ������\t";
	std::cin >> size;
	float* arr = new float[size];
	for (int i = 0; i < size; i++)
	{
		std::cout << "������� " << i << " ������� ������ : \t";
		std::cin >> *(arr + i);
		*(arr + i)-=int(*(arr+i));
	}
	std::cout << "������� ����� ������: ";
	for (int i = 0; i < size; i++)
	{
		std::cout << *(arr + i) << " ";

	}
	//std::cout << "\n";
	//for (int i = 0; i < size; i++)
	//{
	//	*(arr + i) *= *(arr + i);
	//}
	//std::cout << "������������ ������� ������: " << *arr;
	delete[] arr;
}
int main() {
	setlocale(LC_ALL, "ru");
	//series1();
	//series2();
	//series3();
	//series4();
	series6();

}