#include <iostream>
#include <cmath>
double fact(int n) { // for19
	int res = 1;
	for (int i = 1; i <= n; i++)
	{
		res *= i;
	}
	return res;
}
bool is_even(int value) {
	return	value % 2 == 0;

}
void for11(int n) {
	int sum = 0;
	for (int i = 0; i < n; ++i) {
		sum += pow(n + i, 2);
	}
	std::cout << sum;
}
void for12(int n) {
	float prod = 1;
	float odin = 1.1;
	for (int i = 0; i < n; odin += 0.1, ++i) {
		prod *= odin;
	}
	std::cout << prod;
}
double for13(double n) {
	double res = 0;
	double temp;
	int i = 11;
	int end = 11 + n;
	for (; i < end; ++i)
	{
		temp = is_even(i) ? res -= i : res += i;
	}

	//res = is_even(i) ? res + 10 : res;
	return res / 10.0;
}
void for14(int n) {
	int odin = 1;
	int sum = 0;
	for (int i = 0; i < n; odin += 2, i++)
	{
		sum += odin;
	}
	std::cout << sum;
}
void for15(int a, int n) {
	int res = 1;
	for (int i = 0; i < n; ++i)
	{
		res *= a;
	}
	std::cout << res;
}
void for16(float a, int n) {
	for (int i = 0; i < n; i++)
	{
		std::cout << pow(a, i) << std::endl;
	}
}
void for17(float a, int n) {
	int odin = 1;
	for (int i = 0; i < n; i++)
	{
		a += pow(a, i);

	}
	odin += a;
	std::cout << odin;
}
void for18(float a, int n) {
	int odin = 1;
	float res = 0;
	for (int i = 0; i < n; i++)
	{
		i % 2 == 0 ? res -= pow(a, i) : res += pow(a, i);
	}
	float res1 = odin -= res;
	std::cout << res1;
}
void for20(int n) {
	int res = 0;
	for (int i = 1; i <= n; i++)
	{
		res += fact(i);
	}
	std::cout << res;
}
double for21(int n) {
	double res = 1;
	for (int i = 1; i <= n; i++)
	{
		res += 1 / fact(i);
	}
	return res;
}
double for22(int x, int n) {
	double res = 1;
	for (int i = 1; i <= n; i++)
	{
		res += pow(x, i) / fact(i);
	}
	return res;
}
double for23(int x, int n) {
	double res = 1;
	for (int i = 1; i <= n; i++)
	{
		is_even(i) ? res += pow(x, 2 * i + 1) / fact(2 * i + 1)
			: res -= pow(x, 2 * i + 1) / fact(2 * i + 1);
	}
	return res;
}
double for24(int x, int n) {
	double res = 0;
	double i = 0;
	//double temp1, temp2;
	for (; i <= n; i++)
	{
		//temp1 = res +=pow(x, 2 * i) / fact(2 * i);
		//temp2 = res -=pow(x, 2 * i) / fact(2 * i);
		//is_even(i) ? temp1 : temp2;
		is_even(i) ? res += pow(x, 2 * i) / fact(2 * i) :
			res -= pow(x, 2 * i) / fact(2 * i);
		//res += pow(-1, i) * pow(x, 2 * i) / fact(2 * i);
	}
	return res;
}
double for25(double x, int n) {
	double res = 0;
	for (int i = 1; i <= n; i++)
	{
		is_even(i) ? res -= pow(x, i) / i : res += pow(x, i) / i;
	}
	return res;
}
double for26(double x, int n) {
	double res = 0;
	for (int i = 0; i <= n; i++)
	{
		is_even(i) ? res += pow(x, 2 * i + 1) / (2 * i + 1)
			: res -= pow(x, 2 * i + 1) / (2 * i + 1);
	}
	return res;
}
double for27(double x, int n) {
	double res = 0;
	for (int i = 1; i <= n; i++)
	{
		is_even(i) ? res += (2 * i - 1) * pow(x, 2 * i + 1) / (2 * i) * (2 * i + 1)
			: res -= (2 * i - 1) * pow(x, 2 * i + 1) / (2 * i) * (2 * i + 1);
	}
	return res;
}
double for28(double x, int n) {
	double res = 0;
	for (int i = 1; i <= n; i++)
	{
		res += pow(-1, i - 1) * (2 * i - 3) * pow(x, i) / (2 * i);
	}
	return res;
}
double for29(double a, double b, int n) {
	double h = (b - a) / n;
	std::cout << "Длинна отрезка = " << h << std::endl;
	for (int i = 1; i < n; i++)
	{
		a += i * h;
	}
	return a;
}
double for30(double a, double b, int n) {
	double h = (b - a) / n;
	double f;
	int i = 0;
	for (; i < n; i++)
	{
		f = 1 - sin(a += i * h);
	}
	std::cout << "Длинна каждого отрезка = " <<
		h << "\nТочка разбивающего отрезка = ";
	return f;
}
double for31(int n) {
	double a = 2;
	for (int i = 1; i <= n; ++i)
	{
		a = 2 + 1 / a;
	}
	return a;
}
double for32(int n) {
	float ai = 1;
	int i;
	for (i = 1; i <= n; ++i) {
		std::cout << i << " " << (ai + 1) / i << " ";
		ai = (ai + 1) / i;
	}
	return 0;
}
/*for 33*/int Fib(int n) {
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return Fib(n - 1) + Fib(n - 2); {
		for (int i = 0; i < 15; i++)
		{
			std::cout << Fib(i) << " ";
		}
		return 0;
	}
}
double for36(int n, int k) {
	int res = 0;
	for (int i = 1; i <= n; i++)
	{
		res += pow(i, k);
	}
	return res;
}
double for37(int n) {
	double res = 0;
	for (int i = 1; i <= n; i++)
	{
		res += pow(i, i);
	}
	return res;
}
double for38(int n) {
	double res = 0;
	double temp = n;
	for (int i = 1; i <= n; --temp, i++)
	{
		res += pow(i, temp);
	}
	return res;
}
double for39(int a, int b) {
	int res = 0;
	for (; a <= b; ++a)
	{
		for (int temp = 1; temp <= a; temp++)
		{
			std::cout << a << " ";
		}
	}
	return 0;
}
void for40(int a, int b) {
	for (int i = 1; i <= b - a + 1; i++)
	{
		for (int i2 = 1; i2 <= i; i2++)
		{
			std::cout << a + i - 1 << " ";
		}
	}

}
double wh1(double a, double b) {
	while (a > b) {
		a -= b;
	}
	return a;
}
double wh2(double a, double b) {
	double temp = b;
	int i = 0;
	while (a >= b) {
		a -= b;
		i++;
	}
	return i;
}
void wh3(int n, int k) {
	int count = 0;
	while (n >= k)
	{
		n -= k;
		++count;
	}
	std::cout << count << "\n" << n;
}
int main() {

	bool wh4(int n) {
		while (n > 0) {
			n -= 3;
		}
		if (n == 0) {
			std::cout << "true";
		}
		else {
			std::cout << "false";
		}
		return 0;
	}
	int wh5(int n) {
		int k = 1;
		int i = 2;
		for (; i < n; ++k)
		{
			i *= 2;
		}
		return k;
	}
	//int wh6(int n) {
	//	for (int i = 0; i < n; i++)
	//	{
	//		fact(fact(i)) = i * (i - i *= 2);
	//	}
	//}
	int wh7(int n) {
		int i = 0;
		for (; i * i < n; ++i)
		{

		}
		return i;
	}
	int wh8(int n)
	{
		int k = 1;
		while (k * k <= n) {


			k++;
		}
		return k - 1;
	}
	int wh9(int n) {
		int k = 1;
		while (pow(3, k) < n)
		{
			++k;
		}
		return k;
	}
	int wh10(int n) {
		int k = 1;
		while (pow(3, k) < n)
		{
			++k;
		}
		return k;
	}
	int wh11(int n) {
		int res = 0, ik;
		for (int k = 1; res < n; ++k)
		{
			res += k;
			ik = k;
		}
		std::cout << res << " ";
		return ik;
	}
	int wh12(int n) {
		int sum = 1;;
		for (int i = 0; i <= n; i++)
		{
			sum += 1 / i;
		}
		return res;
	}

	int main() {
		//for11(2);
		//for12(3);
		//for14(5);
		//for15(2, 2);
		//for16(2,5);
		//for17(2, 2);
		//for18(3, 4);
		//fact(5);
		//for20(3);
		//std::cout << for21(3);
		//std::cout << for22(2,3);
		//std::cout << for23(2, 3) << "\n";
		//std::cout << for13(2) << "\n";
		//std::cout << for24(2, 3) << std::endl;
		//std::cout << for25(2, 3) << std::endl;
		//std::cout << for26(2, 3) << std::endl;
		//std::cout << for27(2, 3) << std::endl;
		//std::cout << wh2(14, 3);
		//wh3(7, 2);
		////wh3(7, 2);
		//std::cout << wh12(11);
	}