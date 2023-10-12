#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void DuaVeDau(int[], int);


int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);
	DuaVeDau(b, k);
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
	cout << "Mang ";
	for (int i = 0; i < n; i++)
	{
		cout << setw(8) << a[i];
	}
}

void DuaVeDau(int a[], int n)
{
	int vt = 0;
	int temp = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 3 == 0)
		{
			int temp = a[i];
			a[i] = a[vt];
			a[vt] = temp;
			vt++;
		}
	}
}