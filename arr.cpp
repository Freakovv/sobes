#include <iostream>

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
void series5() {
	int size;
	std::cout << "������� ���-�� ��������� � ������:\t";
	std::cin >> size;
	float* arr = new float[size];
	for (int i = 0; i < size; i++)
	{
		std::cout << "������� " << i + 1 << " ������� ������ :\t";
		std::cin >> *(arr + i);
		// is_fractional(i) ? ...
	}

}
int main() {
	setlocale(LC_ALL, "ru");
	//series1();
	//series2();
	//series3();
	series4();
}