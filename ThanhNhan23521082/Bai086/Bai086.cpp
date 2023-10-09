#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
float SoDuongCC(float[], int);
int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);
	cout <<endl<< "So duong cuoi cung cua mang la: " << SoDuongCC(b, k);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

void Xuat(float a[], int n)
{
	cout << "Mang da nhap: ";
	for (int i = 0; i < n; i++)
	{
		cout << setw(8) << a[i];
	}
}

float SoDuongCC(float a[], int n)
{
	for (int i = n-1; i >= 0; i--)
	{
		if (a[i] > 0)
			return a[i];	
	}
	return 0;
}
