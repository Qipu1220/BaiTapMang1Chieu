#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int a[], int& n);
int DauTien(int[], int);

int main()
{
	int a[500];
	int k;
	Nhap(a, k);
	cout << "So chan dau tien la : " << DauTien(a, k);
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n : ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

int DauTien(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			return a[i];
	return -1;
}