#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float a[], int& n);
float LonNhat(float[], int);
float NhoNhat(float[], int);
void TimDoan(float a[], float n);

int main()
{
	float a[500];
	int k;
	Nhap(a, k);
	TimDoan(a, k);
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

float LonNhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i < n; i++)\
		if (a[i] > lc)
			lc = a[i];
	return lc;
}

float NhoNhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i < n; i++)\
		if (a[i] < lc)
			lc = a[i];
	return lc;
}

void TimDoan(float a[], float n)
{
	float x = NhoNhat(a, n);
	float y = LonNhat(a, n);
	cout << "Doan thoa man la : " << "[" << x << ", " << y << "]";
}