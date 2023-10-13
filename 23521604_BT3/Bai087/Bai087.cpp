#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float a[], int& n);
float CuoiCung(float[], int);

int main()
{
	float a[500];
	int k;
	Nhap(a, k);
	cout << "Gia tri thoa man la : " << CuoiCung(a, k);
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n : ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

float CuoiCung(float a[], int n)
{
	for (int i = n - 1; i >= 0; i--)
		if (a[i] < 0 && a[i]>-1)
			return a[i];
	return 0;
}