#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void nhap(float a[], int& n);
void xuat(float a[], int n);
void hoanvi(float& a, float& b);
void DuongTang(float a[], int n);
void AmGiam(float a[], int n);
void DuongTangAmGiam(float a[], int n);

int main()
{
	float b[100];
	int k;
	nhap(b, k);
	cout << "Mang ban dau: \n";
	xuat(b, k);
	DuongTangAmGiam(b, k);
	cout << "\nMang duong tang am giam: \n";
	xuat(b, k);
	return 0;
}

void nhap(float a[], int& n)
{
	cout << "nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (100 + 1) - (50.1);
	}
}

void xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(8) << a[i];
	}
}

void hoanvi(float& a, float& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void DuongTang(float a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i]>0 && a[j]>0 && a[i] > a[j])
				hoanvi(a[i], a[j]);
		}
	}
}

void AmGiam(float a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i]<0 && a[j]<0 && a[i] < a[j])
				hoanvi(a[i], a[j]);
		}
	}
}

void DuongTangAmGiam(float a[], int n)
{
	DuongTang(a, n);
	AmGiam(a, n);
}