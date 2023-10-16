#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int, string);
void HoanVi(int&, int&);
void InterchangeSort(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k, "1");
	InterchangeSort(b, k);
	cout << endl;
	Xuat(b, k, "2");
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

void Xuat(int a[], int n, string x)
{
	cout << "Mang " << x << " : ";
	for (int i = 0; i < n; i++)
	{
		cout << setw(8) << a[i];
	}
}

void HoanVi(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;

}

//Dung de quy
void InterchangeSort(int a[], int n)
{
	if (n == 1)
		return;
	for (int i = 0; i <= n - 2; i++)
	{
		if (a[i] > a[n - 1])
			HoanVi(a[n - 1], a[i]);
	}
	InterchangeSort(a, n - 1);
}