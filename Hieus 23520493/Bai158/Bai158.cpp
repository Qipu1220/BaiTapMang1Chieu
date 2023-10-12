#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void DichTrai(float[], int);

int main()
{
	float b[10];
	int n;
	Nhap(b, n);
	cout << "Mang mot chieu cac so nguyen duong ban dau:" << endl;
	Xuat(b, n);
	cout << "Uoc chung lon nhat cua tat ca cac phan tu trong mang la " << endl;
	DichTrai(b, n);
	Xuat(b, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n=";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
}
void Xuat(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << "a[" << i << "]=" << a[i] << endl;
}
void DichTrai(float a[],int n)
{
	float temp = a[0];
	for (int i = 0; i <= n - 2; i++)
		a[i] = a[i + 1];
	a[n - 1] = temp;
}
