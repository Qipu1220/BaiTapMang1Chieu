#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void nhap(float a[], int& n)
{
	cout << "nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (100 + 1) - (50.1);
	}
}

void xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(8) << a[i];
	}
}

void XayDung(float a[], int n, float b[], int& m)
{
	if (n == 1)
	{
		m = n;
		b[0] = 0;
		return;
	}
	m = n;
	b[0] = a[1];
	for (int i = 1; i < n-1; i++)
	{
		b[i] = a[i - 1] + a[i + 1];
	}
	b[m - 1] = a[n - 2];
}

int main()
{
	float b[100];
	int k;
	nhap(b, k);
	cout << "Mang 1: \n";
	xuat(b, k);
	float a[100];
	int h;
	XayDung(b, k, a, h);
	cout << "\nMang 2 la: \n";
	xuat(a, h);
	return 0;
}