#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
void Nhap(int[], int&, string);
void Xuat(int[], int, string);
void TronMang(int[], int, int[], int, int[], int&);
void HoanVi(int&, int&);
void MangTang(int[], int);
int main()
{
	int a[100], b[100],c[100];
	int m, n,p;
	Nhap(a, m, "m");
	Xuat(a, m, "1");
	cout << endl;
	Nhap(b, n, "n");
	Xuat(b, n, "2");
	TronMang(a, m, b, n, c, p);
	cout << endl;
	Xuat(c, p, "da tron");
	MangTang(c, p);
	cout << endl;
	Xuat(c, p, "tron sau khi sap xep: ");
	return 0;
}

void Nhap(int a[], int& n, string x)
{
	cout << "Nhap " << x << ": ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

void Xuat(int a[], int n, string y)
{
	cout << "Mang " << y << ": ";
	for (int i = 0; i < n; i++)
	{
		cout << setw(8) << a[i];
	}
}
void HoanVi(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

void TronMang(int a[], int m, int b[], int n, int c[] , int& p)
{
	p = 0;
	for (int i = 0; i < m; i++)
	{
		c[p++] = a[i];
	}
	for (int j = 0; j < n; j++)
	{
		c[p++] = b[j];
	}
}

void MangTang(int a[], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n ; j++)
		{
			if (a[i] > a[j])
				HoanVi(a[i], a[j]);
		}
	}
}