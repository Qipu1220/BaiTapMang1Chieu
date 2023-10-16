#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void XoaViTri(int[], int&, int);
void XoaChinhPhuong(int[], int&);
bool ktChinhPhuong(int);

int main()
{
	int a[10];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau:" << endl;
	Xuat(a, n);
	cout << "Mang sau khi bien doi la: " << endl;
	XoaChinhPhuong(a, n);
	Xuat(a, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n=";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
}
void Xuat(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << "a[" << i << "]=" << a[i] << endl;
}
void XoaViTri(int a[], int &n, int k)
{
	for (int i = k; i <= n - 2; i++)
		a[i] = a[i + 1];
	n--;
}
void XoaChinhPhuong(int a[], int& n)
{
	for (int i = n - 1; i >= 0; i--)
		if (ktChinhPhuong(a[i]))
			XoaViTri(a, n, i);
}
bool ktChinhPhuong(int n)
{
	for (int i = 1; i * i <= n; i++)
		if (i * i == n)
			return true;
	return false;
}