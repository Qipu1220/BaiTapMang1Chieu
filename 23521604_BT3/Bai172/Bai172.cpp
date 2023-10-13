#include <iostream>
#include <iomanip>
using namespace std;
void NhapTang(float a[], int& n);
void Xuat(float[], int);

int main()
{
	float a[500];
	int k;
	NhapTang(a, k);
	Xuat(a, k);
}

void NhapTang(float a[], int& n)
{
	cout << "Nhap n : ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
		int x = a[i];
		int j;
		for (j = i - 1; j >= 0 && a[j] > x; j--)
			a[j + 1] = a[j];
		a[j + 1] = x;
	}
}

void Xuat(float a[], int n)
{
	cout << "Mang sau khi sap xep : ";
	for (int i = 0; i < n; i++)
		cout << setw(5) << a[i];
}

