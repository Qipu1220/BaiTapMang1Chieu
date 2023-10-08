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
		a[i] = rand() % (100 + 1) - (50);
	}
}

void xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(8) << a[i];
	}
}

void XoaViTi(float a[], int& n, int k)
{
	for (int i = k; i < n - 1; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}

float LonNhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i < n; i++)
	{
		if (lc < a[i])
			lc = a[i];
	}
	return lc;
}

void XoaLonNhat(float a[], int& n)
{
	float ln = LonNhat(a, n);
	for (int i = 0; i < n; i++)
	{
		if (a[i] == ln)
			XoaViTi(a, n, i);
	}
}

int main()
{
	float b[100];
	int k;
	nhap(b, k);
	cout << "Mang ban dau: \n";
	xuat(b, k);
	XoaLonNhat(b, k);
	cout << "\nMang sau khi xoa: \n";
	xuat(b, k);
	return 0;
}