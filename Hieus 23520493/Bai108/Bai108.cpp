#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
void Nhap(  int[], int&);
void Xuat(  int[], int);
int ucln(int,int);
int TimUCLN(  int[], int);

int main()
{
	  int b[10];
	int n;
	Nhap(b, n);
	cout << "Mang mot chieu cac so nguyen duong ban dau:" << endl;
	Xuat(b, n);
	cout << "Uoc chung lon nhat cua tat ca cac phan tu trong mang la " << TimUCLN(b, n) << endl;
	return 0;
}

void Nhap(  int a[], int& n)
{
	cout << "Nhap n=";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
}
void Xuat(  int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << "a[" << i << "]=" << a[i] << endl;
}
int ucln(int a,int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
	{
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	return (a + b);
}

int TimUCLN(  int a[], int n)
{
	int lc = a[0];
	for (int i = 0; i < n; i++)
		lc = ucln(lc, a[i]);
	return lc;
}
