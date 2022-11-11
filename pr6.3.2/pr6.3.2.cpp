#include <iostream>

using namespace std;

void fill(double* pMem, int n);
void findNegative(double* pMem, int n, int* negativeElements);

int main()
{
	int n;
	int negativeElements = 0;
	cout << "Enter array size: "; cin >> n;
	double* pMem = new double[n];
	cout << "Please fill array: ";
	fill(pMem, n);
	findNegative(pMem, n, &negativeElements);
	cout << "There is " << negativeElements << " negative elements there." << "\n";

	delete[n] pMem;
}

void fill(double* pMem, int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> pMem[i];
	}
}

void findNegative(double* pMem, int n, int* negativeElements)
{
	for (int i = 0; i < n; i++)
	{
		if (pMem[i] < 0)
			return findNegative(pMem, n, negativeElements);
	}
}