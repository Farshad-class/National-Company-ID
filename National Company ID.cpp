#include <iostream>
#include <iomanip>
#include <conio.h>
#include <ctime>
#include <cstdint>
#include <cinttypes>

#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
using namespace std;

void f(int64_t);

int main()
{

	int64_t n;
	cout << "Please enter Company national ID :";
	cin >> n;
	if (n == 11111111111 || n == 22222222222 || n == 33333333333 || n == 44444444444 || n == 55555555555 || n == 66666666666 || n == 77777777777 || n == 88888888888 || n == 99999999999 || n == 00000000000)
		do
		{
			cout << "Please enter Company national ID :";
			cin >> n;
		} while (false);

		f(n);

		getch();

}

void f(int64_t n)
{
	int64_t k;
	int64_t m, h;
	int64_t sum = 0, sum1 = 0, sum2 = 0;
	int64_t a[11];
	int64_t b[5] = { 17,19,23,27,29 };
	for (int i = 0; i <= 10;i++)
	{
		k = n % 10;
		n = n / 10;
		a[i] = k;
	}
	for (int j = 1; j <= 5;j++)
	{
		h = a[1] + 2;
		sum1 = sum1 + (h + a[j] * b[j - 1]);
	}
	for (int j = 6; j <= 10;j++)
	{
		h = a[1] + 2;
		sum2 = sum2 + (h + a[j] * b[(j - 5)]);
	}
	sum = sum1 + sum2;
	m = sum % 11;
	if (m == 10 || m == 0)
	{
		m = 0;

		if (m == a[0])
		{
			cout << "Company national ID is true";
		}
		else
		{
			cout << "Company national ID is false";
		}
	}

}
