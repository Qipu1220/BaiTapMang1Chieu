#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int a[], int& n);
void XayDung(int[], int, int[], int&);
void Xuat(int[], int);

int main()
{
	int a[500];
	int b[500];
	int n;
	int k;
	Nhap(a, n);
	XayDung(a, n, b, k);
	Xuat(b, k);
	
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

void XayDung(int a[], int n, int b[], int& k)
{
	k = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 != 0)
		{
			b[k] = a[i];
			k++;
		}
}
void Xuat(int a[], int n)
{
	cout << "Mang moi la : ";
	for (int i = 0; i < n; i++)
		cout << setw(5) << a[i];
}