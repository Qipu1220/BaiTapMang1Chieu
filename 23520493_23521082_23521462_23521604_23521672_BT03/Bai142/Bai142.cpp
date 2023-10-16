#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float a[], int& n);
void HoanVi(float&, float&);
void DuongTang(float[], int);
void Xuat(float[], int);

int main()
{
	float a[500];
	int k;
	Nhap(a, k);
	DuongTang(a, k);
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

void HoanVi(float& x, float& y)
{
	float temp = x;
	x = y;
	y = temp;
}

void DuongTang(float a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if ((a[i] > a[j])&&(a[i]>0)&&(a[j]>0))
				HoanVi(a[i], a[j]);
}