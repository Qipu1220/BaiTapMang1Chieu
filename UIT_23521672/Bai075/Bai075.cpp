#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void nhap(float a[], int& n);
void xuat(float a[], int n);
float XaNhat(float a[], int n, int x);

int main()
{
	float b[100];
	int k;
	nhap(b, k);
	cout << "Mang ban dau: \n";
	xuat(b, k);
	int x;
	cout << "\nNhap x: ";
	cin >> x;

	cout << "\nXa gia tri x nhat: \n" << XaNhat(b, k, x);
	return 0;
}

void nhap(float a[], int& n)
{
	cout << "\nnhap n: ";
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

float XaNhat(float a[], int n, int x)
{
	float lc = a[0];
	for (int i = 0; i < n; i++)
	{
		if (abs(a[i] - x) > abs(lc - x))
			lc = a[i];
	}
	return lc;
}
