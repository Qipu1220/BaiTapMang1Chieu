#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int a[], int& n);
void Xuat(int[], int);
void DaoMang(int[], int);
void DaoChan(int[], int);
void DaoLe(int[], int);

int main()
{
	int a[500];
	int k;
	DaoChan(a, k);
	DaoLe(a, k);
	Xuat(a, k);
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n1 : ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void Xuat(int a[], int n)
{
	cout << "Mang sau khi sap xep : ";
	for (int i = 0; i < n; i++)
		cout << setw(5) << a[i];
}

void DaoMang(int a[], int n)
{
	int d = 0;
	int c = n - 1;
	while (d < c)
	{
		int temp = a[d];
		a[d] = a[c];
		a[c] = temp;
		d++;
		c--;
	}

}

void DaoChan(int a[], int n)
{
	int b[100];
	int k;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			b[k++] = a[i];
	DaoMang(b, k);
	k = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			a[i] = b[k++];
}

void DaoLe(int a[], int n)
{
	int b[100];
	int k=0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 != 0)
			b[k++] = a[i];
	DaoMang(b, k);
	k = 0;
	for (int i=0;i<n;i++)
		if (a[i] % 2 == 0)
			a[i] = b[k++];
}