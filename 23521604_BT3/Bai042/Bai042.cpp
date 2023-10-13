#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float a[], int& n);
float TongGiaTri(float[], int);

int main()
{
	float a[500];
	int k;
	Nhap(a, k);
	cout << "Tong gia tri la : " << TongGiaTri(a, k);
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

float TongGiaTri(float a[], int n)
{
	float s = 0;
	for (int i = 0; i <= n - 2; i++)
		if (a[i] > abs(a[i + 1]))
			s = s + a[i];
	return s;
}

