#include "series.h"
#include "Functions.h"
int main() {
	double value1 = 4.1;
	int value = 5;
	const int size = 8;
	const int size1 = 3;
	double arr[size]{1.1,7.8,0,5.1,0,7.1,8.1,-10.2 };
	int arr1[size]{ 1,2,3 };
	//sum_of_squares(10);
	//prod_of_squares(2);
	//avg_of_squares(2);
	//sum_and_prod_of_array(3);
	//transformation_of_squares(3);
	//prod_of_double_part(3);
	//round_array(3);
	//even_numbers(3);
	//numbers_of_odd_numbers(3);
	//std::cout << check_positivity_of_numbers(4);
	//std::cout << check_numbers(3);
	//std::cout << output_numbers_to_zero(arr, size);
	//std::cout << number_of_numbers_less_than_value(arr, size, value);
	//std::cout << output_first_number(arr, size, value);
	//output_last_number(arr, size, value);
	//sort_numbers(arr, size, value1);
	//output_numbers_less_than_left_number(arr, size);
	//output_numbers_less_than_right_number(arr, size);
	//std::cout << checking_numbers_for_ascending(arr1, size1);
	std::cout << checking_numbers_for_decreasing(arr1, size1);
}
