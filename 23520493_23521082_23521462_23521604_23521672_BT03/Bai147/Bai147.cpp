#include <iostream>
#include <iomanip>
using namespace std;
void Nhapa(float a[], int& n);
void Xuat(float[], int);
void Nhapb(float b[], int& n);
void Tron(float[], int, float[], int, float[], int&);

int main()
{
	float a[500], b[500], c[500];
	int k1,k2;
	Nhapa(a, k1);
	Nhapb(b, k2);
	int k;
	Tron(a, k1, b, k2, c, k);
	Xuat(c, k);
}

void Nhapa(float a[], int& n)
{
	cout << "Nhap n1 : ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void Nhapb(float b[], int& n)
{
	cout << "Nhap n2 : ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap b[" << i << "]: ";
		cin >> b[i];
	}
}

void Xuat(float a[], int n)
{
	cout << "Mang sau khi sap xep : ";
	for (int i = 0; i < n; i++)
		cout << setw(5) << a[i];
}

void Tron(float a[], int n, float b[], int m, float c[], int& p)
{
	int i = 0;
	int j = 0;
	p = 0;
	while (i <= n && j <= m)
	{
		if ((i < n && j<m && a[i]>b[j]) || (j >= m))
			c[p++] = a[i++];
		else
			c[p++] = b[j++];
	}
}