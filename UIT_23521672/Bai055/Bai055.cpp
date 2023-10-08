#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void nhap(int a[], int& n)
{
	cout << "nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (200 + 1) - 100.1;
}

void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];
}

bool ktNguyenTo(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			dem++;
	}
	if (dem == 2)
		return true;
	else
		return false;
}

int DemSoNguyenTo(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (ktNguyenTo(a[i]))
			dem++;
	}
	return dem;
}

int main()
{
	int b[100];
	int k;
	nhap(b, k);
	cout << "Mang ban dau: \n";
	xuat(b, k);
	cout << "\nSo luong so nguyen to: " << DemSoNguyenTo(b, k);
	return 0;
}