#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

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

void MangTang(float a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
				hoanvi(a[i], a[j]);
		}
	}
}

void ThemBaoToan(float a[], int& n, float x)
{
	int i = n - 1;
	while (i >= 0 && a[i] > x)
	{
		a[i + 1] = a[i];
		i--;
	}
	a[i + 1] = x;
	n++;
}
int main()
{
	float b[100];
	int k;
	nhap(b, k);
	MangTang(b, k);
	cout << "Mang ban dau: \n";
	xuat(b, k);
	float m;
	cout << "\nNhap them: ";
	cin >> m;
	ThemBaoToan(b, k, m);
	cout << "\nMang sau khi them: \n";
	xuat(b, k);
	return 0;
}