#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float a[], int& n);
void Xuat(float [], int);
void XoaViTri(float [], int&, int);
void XoaTrung(float[], int&);

int main()
{
	float a[500];
	int k;
	Nhap(a, k);
	XoaTrung(a, k);
	Xuat(a, k);
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n : ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void Xuat(float a[], int n)
{
	cout << "Mang sau khi sap xep : ";
	for (int i = 0; i < n; i++)
		cout << setw(5) << a[i];
}

void XoaViTri(float a[], int& n, int k)
{
	for (int i = k; i <= n - 2; i++)
		a[i] = a[i + 1];
	n--;
}

void XoaTrung(float a[], int &n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		int flag = 0;
		for (int j = 0; j <= i - 1; j++)
			if (a[j] == a[i])
				flag = 1;
		if (flag == 1)
			XoaViTri(a, n, i);
	}
}