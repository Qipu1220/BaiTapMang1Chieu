#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int a[], int& n);
void Xuat(int[], int);
void XoaViTri(int[], int&, int);
void XoaChan(int[], int&);

int main()
{
	int a[500];
	int k;
	Nhap(a, k);
	XoaChan(a, k);
	Xuat(a, k);
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n : ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void Xuat(int a[], int n)
{
	cout << "Mang sau khi sap xep : ";
	for (int i = 0; i < n; i++)
		cout << setw(5) << a[i];
}

void XoaViTri(int a[], int& n, int k)
{
	for (int i = k; i <= n - 2; i++)
		a[i] = a[i + 1];
	n--;
}

void XoaChan(int a[], int& n)
{
	for (int i = n - 1; i >= 0; i--)
		if (a[i] % 2 == 0)
			XoaViTri(a, n, i);
}