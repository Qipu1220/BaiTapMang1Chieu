#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int ChuSoDau(int);
int Tong(int[], int);

int main()
{
	int b[10];
	int n;
	Nhap(b, n);
	cout << "Mang ban dau:" << endl;
	Xuat(b, n);
	cout << "Tong cac phan tu s= " << Tong(b, n) << endl;

	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n=";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]=";
		cin >> a[i];
	}
}
void Xuat(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << "a[" << i << "]=" << a[i] << endl;
}
int Tong(int a[], int n)
{
	int s = 0;
	for (int i = 0; i <= n - 1; i++)
	{
		if(ChuSoDau(a[i]) & 1)
			s += a[i];
	}
		return s;
}
int ChuSoDau(int n)
{
	int t = abs(n);
	while (t >= 10)
		t /= 10;
	return t;
}