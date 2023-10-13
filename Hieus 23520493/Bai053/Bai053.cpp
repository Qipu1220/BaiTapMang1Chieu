#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
int TanSuat(float[], int, float);

int main()
{
	float b[10];
	int n;
	float x;
	cout << "Nhap x=";
	cin >> x;
	Nhap(b, n);
	cout << "Mang ban dau:" << endl;
	Xuat(b, n);
	cout << "So lan xuat hien cua gia tri x: " << TanSuat(b, n,x) << endl;

	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n=";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]=";
		cin >> a[i];
	}
}
void Xuat(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << "a[" << i << "]=" << a[i] << endl;
}
int TanSuat(float a[], int n, float x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i]==x)
			dem++;
	return dem;
}