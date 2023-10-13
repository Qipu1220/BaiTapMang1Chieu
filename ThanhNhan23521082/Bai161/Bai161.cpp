#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int, string);
void XoaViTri(float[], int&, int);
void XoaAm(float[], int&);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k,"dau");
	XoaAm(b, k);
	Xuat(b, k, "sau");
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

void Xuat(float a[], int n, string x)
{
	cout << "Mang " <<x<< " : ";
	for (int i = 0; i < n; i++)
	{
		cout << setw(10) << a[i];
	}
}

void XoaViTri(float a[], int& n, int k)
{
	for (int i = k; i <= n - 2; i++)
		a[i] = a[i + 1]; // cho gia tri can xoa ra cuoi mang roi giam so phan tu
	n--; 
}

void XoaAm(float a[], int& n)
{
	for (int i = n - 1; i >= 0; i--)
		if (a[i] < 0)
			XoaViTri(a, n, i);
}
//debug de hieu