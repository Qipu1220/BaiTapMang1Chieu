#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool KTNT(int);
int MaxNT(int[], int);
int NguyenToDau(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);
	cout << "So nguyen to lon nhat la: " << MaxNT(b, k);
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
	cout << "Mang da nhap: ";
	for (int i = 0; i < n; i++)
	{
		cout << setw(8) << a[i];
	}
}

bool KTNT(int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (n % i == 0)
			dem++;
	}
	if (dem == 2)
		return true;
	return false;
}

int MaxNT(int a[], int n)
{
	int lc = NguyenToDau(a, n);
	if (lc == 0)
		return 0;
	for (int i = 0; i < n; i++)
	{
		if (KTNT(a[i]) && a[i] > lc)
			lc = a[i];
	}
	return lc;
}




int NguyenToDau(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (KTNT(a[i]))
			return a[i];
		return 0;
	}
}