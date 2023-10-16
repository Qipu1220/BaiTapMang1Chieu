#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int a[], int& n);
void Xuat(int [], int);
bool ktNguyenTo(int k);
void DuaVeCuoi(int a[], int n);

int main()
{
	int a[500];
	int k;
	Nhap(a, k);
	DuaVeCuoi(a, k);
	Xuat(a, k);
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n1 : ";
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

bool ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}

void DuaVeCuoi(int a[], int n)
{
	int vt = n - 1;
	for (int i = n - 1; i >= 0; i--)
		if (ktNguyenTo(a[i]))
		{
			int temp = a[i];
			a[i] = a[vt];
			a[vt] = temp;
			vt--;
		}
}
