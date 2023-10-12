#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void nhap(float a[], int& n);
void xuat(float a[], int n);
float AmDau(float a[], int n);
float AmLonNhat(float a[], int n);

int main()
{
	float b[100];
	int k;
	nhap(b, k);
	cout << "Mang ban dau: \n";
	xuat(b, k);

	cout << "\nGia tri am lon nhat: \n" << AmLonNhat(b, k);
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

float AmDau(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
			return a[i];
		return 0;
	}
}

float AmLonNhat(float a[], int n)
{
	float lc = AmDau(a, n);
	if (lc == 0)
		return 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i]<0 && a[i]>lc)
			lc = a[i];
	}
	return lc;
}