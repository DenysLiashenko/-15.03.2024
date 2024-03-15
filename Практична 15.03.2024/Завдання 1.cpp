#include <iostream> //бібліотека для роботи операторів введення / виведення
#include <math.h> //бібліотека для використання математичних функцій
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "ukr"); //дозволити використання української мови
	const int n = 5;
	int i, a[n], sum = 0, min=0, max=0,ave = 0, find, x,k;

	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (i = 0; i < n; i++)
	{
		sum = sum + a[i];
	}
	cout << "The sum of array elements: " << sum << endl;
	i = 0;

	min = a[i];
	for (i = 0; i < n; i++)
	{
		if (min > a[i])
		{
			min = a[i];
		}
	}
	cout << "The minimum array element: " << min << endl;
	i = 0;

	max = a[i];
	for (i = 0; i < n; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}
	cout << "The maximum element of the array: " << max << endl;

	ave = sum / (i + 1);
	cout << "Average value: " << max << endl;
	i = 0;

	cout << "The item you want to find: ";
	cin >> find;
	i = 0;

	for (i = 0; i < n; i++)
	{
		if (find == a[i])
		{
			cout << "Yes, there is your item on position " << (i +1) << endl;
		}
	}

	for (k = 0; k < n; k++)
	{
		for (i = 0; i + 1 < n; i++)
		{
			if (a[i] > a[i + 1])
			{
				x = a[i];
				a[i] = a[i + 1];
				a[i + 1] = x;
			}
		}
	}

	i = 0;

	cout << "An ascending array :";
	
	for (i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}

}