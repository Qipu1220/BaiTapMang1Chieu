#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void nhap(float a[], int& n);
void xuat(float a[], int n);
int DemGiaTri(float a[], int n);

int main()
{
	float b[100];
	int k;
	nhap(b, k);
	cout << "Mang ban dau: \n";
	xuat(b, k);
	cout << "\nSo luong trai dau: " << DemGiaTri(b, k);
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

int DemGiaTri(float a[], int n)
{
	int dem = 0;
	if (a[0] * a[1] < 0)
		dem++;
	for (int i = 1; i < n - 1; i++)
	{
		if (a[i] * a[i - 1] < 0 || a[i] * a[i + 1] < 0)
			dem++;
	}
	if (a[n - 1] * a[n - 2] < 0)
		dem++;
	return dem;
}
