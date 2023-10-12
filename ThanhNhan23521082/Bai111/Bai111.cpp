#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int LeDauTien(int[], int);
int MinLe(int[], int);


int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);
	cout << "\nSo chan lon nhat nho hon moi so le: " << MinLe(b, k);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

void Xuat(int a[], int n)
{
	cout << "Mang da nhap: ";
	for (int i = 0; i < n; i++)
	{
		cout << setw(8) << a[i];
	}
}

int LeDauTien(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
			return a[i];
	}
	return 0;
}

int MinLe(int a[], int n)
{
	int lc = LeDauTien(a, n);
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0 && a[i] < lc)
			lc = a[i];
	}
	return lc - 1;
}
