#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void HoanVi(int&, int&);
bool KTHoanThien(int);
void HoanThienGiam(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);
	HoanThienGiam(b, k);
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

void HoanVi(int& x, int& y)
{
	int temp = y;
	y = x;
	x = temp;
}

bool KTHoanThien(int n)
{
	int s = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
			s = s + i;
	}
	if (s == n)
		return true;
	return false;
}

void HoanThienGiam(int a[], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (KTHoanThien(a[i]) && KTHoanThien(a[j]) && a[i] < a[j])
				HoanVi(a[i], a[j]);
		}
	}
}