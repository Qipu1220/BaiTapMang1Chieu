#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void HoanVi(int&, int&);
void SapGiam(int[], int);

int main()
{
	int a[10];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau:" << endl;
	Xuat(a, n);
	cout << "Mang theo thu tu giam dan la: " << endl;
	SapGiam(a, n);
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
void HoanVi(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}
void SapGiam(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (a[i] < a[j])
				HoanVi(a[i], a[j]);
}

