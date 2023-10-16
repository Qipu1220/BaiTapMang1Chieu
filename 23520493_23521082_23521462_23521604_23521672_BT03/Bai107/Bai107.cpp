#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int a[], int& n);
int TanSuat(int[], int, int);
int TimGiaTri(int[], int);

int main()
{
	int a[500];
	int k;
	Nhap(a, k);
	cout << "Gia tri co so lan xuat hien nhieu nhat la  : " << TimGiaTri(a, k);
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

int TanSuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] == x)
			dem++;
	return dem;
}

int TimGiaTri(int a[], int n)
{
	int lc = a[0];
	for (int i = 0; i <= n - 1; i++)
		if (TanSuat(a, n, a[i]) > TanSuat(a, n, lc))
			lc = a[i];
	return lc;
}

