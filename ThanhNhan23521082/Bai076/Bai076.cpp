#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
int GTGN(float[], int, float);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);
	int x;
	cout << endl << "Nhap x: ";
	cin >> x;
	cout << "So gan gia tri x nhat co vi tri la: "<<GTGN(b, k, x);
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

int GTGN(float a[], int n, float x)
{
	int lc = 0;
	for (int i = 0; i < n; i++)
	{
		
		if (abs(a[i]-x) < abs(a[lc] -x))
			lc = i;
	}
	return lc;
}