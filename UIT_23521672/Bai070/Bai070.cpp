#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void nhap(int a[], int& n)
{
	cout << "\nnhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (100 + 1) - (50.1);
	}
}

void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(8) << a[i];
	}
}

int TanSuat (int a[], int n,int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
			dem++;
	}
	return dem;
}

void lietke(int a[], int n, int b[], int m)
{
	for (int i = 0; i < n; i++)
	{
		int flag = 1;
		for (int j = 0; j < i; j++)
		{
			if (a[i] == a[j])
				flag = 0;
		}
		if (TanSuat(b, m, a[i]) == 0 && flag)
			cout << setw(8) << a[i];
	}

	for (int i = 0; i < n; i++)
	{
		int flag = 1;
		for (int j = 0; j < i; j++)
		{
			if (b[i] == b[j])
				flag = 0;
		}
		if (TanSuat(a, n, b[i]) == 0 && flag)
			cout << setw(8) << b[i];
	}
}

int main()
{
	int b[100];
	int k;
	nhap(b, k);
	cout << "Mang 1: \n";
	xuat(b, k);

	int m[100];
	int n;
	nhap(m, n);
	cout << "\nMang 2: \n";
	xuat(m, n);

	cout << "\nCac gia tri chi xuat hien mot tong 2 mang la: \n";
	lietke(b, k, m, n);
	return 0;
}