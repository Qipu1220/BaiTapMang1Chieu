#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void XoaViTri(int[], int&,int);
void XoaTrung(int[], int&, int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);
	int x;
	cout <<endl<< "Nhap x: ";
	cin >> x;
	XoaTrung(b, k, x);
	Xuat(b, k);
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
	cout << "Mang: ";
	for (int i = 0; i < n; i++)
	{
		cout << setw(8) << a[i];
	}
}

void XoaViTri(int a[], int& n, int k)
{
	for (int i = k; i <= n - 2; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}

void XoaTrung(int a[], int& n, int x)
{
	for (int i = n-1; i >=0; i--)
	{
		if (a[i] == x)
			XoaViTri(a, n, i);
	}
}