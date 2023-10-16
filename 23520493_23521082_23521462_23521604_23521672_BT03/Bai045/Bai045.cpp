#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void nhap(float a[], int& n);
void xuat(float a[], int n);
float TongDuong(float a[], int n);
int DemDuong(float a[], int n);

int main()
{
	float b[100];
	int k;
	nhap(b, k);
	cout << "Mang ban dau: \n";
	xuat(b, k);
	cout << "\nTrung binh cong cac gia tri duong: " << TongDuong(b, k) / DemDuong(b, k);
	return 0;
}

void nhap(float a[], int& n)
{
	cout << "nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (200 + 1) - 100.1;
}

void xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];
}

float TongDuong(float a[], int n)
{
	float s = 0;
	for (int i = 0; i < n ; i++)
	{
		if (a[i]>0)
			s += a[i];
	}
	return s;
}

int DemDuong(float a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
			dem++;
	}
	return dem;
}
