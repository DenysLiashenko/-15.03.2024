#include <iostream> //бібліотека для роботи операторів введення / виведення
#include <math.h> //бібліотека для використання математичних функцій
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "ukr"); //дозволити використання української мови
	const int n = 3, m = 3;
	int i, k, a[n][m], b[m][n], summ=0, sums=0;

	for (i = 0; i < n; i++)
	{
		for (k = 0; k < m; k++)
		{
			cin >> a[i][k];
		}
	}

	for (i = 0; i < n; i++)
	{
		for (k = 0; k < m; k++)
		{
			b[k][i] = a[i][k];
		}
	}

	cout << "Transposed array: " << endl;

	for (i = 0; i < m; i++)
	{
		for (k = 0; k < n; k++)
		{
			cout << b[i][k] << " ";
		}
		cout << endl;
	}
	
	k = 0;
	for (i = 0; i < n; i++)
	{
		summ = summ + a[i][k];
		k++;
	}
	cout << "The sum of the elements of the main diagonal: " << summ << endl;

	k = m - 1;
	for (i = n - 1; i != -1; i--)
	{
		sums = sums + a[i][k];
		k--;
	}
	cout << "The sum of the elements of the side diagonal: " << sums << endl;

}