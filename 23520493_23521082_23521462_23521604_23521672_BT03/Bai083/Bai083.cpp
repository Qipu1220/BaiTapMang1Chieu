#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int DauTien(int[], int, int, int);

int main()
{
	int x, y;
	cout << "Nhap x=";
	cin >> x;
	cout << "Nhap y=";
	cin >> y;
	int b[10];
	int n;
	Nhap(b, n);
	cout << "Mang ban dau:" << endl;
	Xuat(b, n);
	cout << "Gia tri dau tien trong mang nam trong khoang [x;y] cho truoc la " << DauTien(b, n,x,y) << endl;
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n=";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
}
void Xuat(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << "a[" << i << "]=" << a[i] << endl;
}
int DauTien(int a[], int n, int x, int y)
{
	for (int i = 0; i < n; i++)
		if (a[i] > x && a[i] < y)
			return a[i];
	return x;
}
