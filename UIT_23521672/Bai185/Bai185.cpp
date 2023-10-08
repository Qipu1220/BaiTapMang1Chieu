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
	{
		a[i] = rand() % (100 + 1) - (50);
	}
}

void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(8) << a[i];
	}
}

int ktCon(int a[], int n, int vt, int l)
{
	int flag = 1;
	for (int i = 0; i <= l - 1; i++)
		if (a[vt+i]<=0)
			flag = 0;
	return flag;
}

void DuongDaiNhat(int a[], int n,int& vtd,int& vtc)
{
	int dem = 0;
	for (int l = n; l >=1; l--)
	{
		for (int vt = 0; vt <= n - l; vt++)
		{
			if (ktCon(a, n, vt, l) == 1)
			{
				vtd = vt;
				vtc = vt + l - 1;
				return;
			}
		}
	}
	vtd = vtc = -1;
}

int main()
{
	int b[100];
	int k;
	nhap(b, k);
	cout << "Mang ban dau: \n";
	xuat(b, k);
	int m, n;
	DuongDaiNhat(b, k, m, n);
	cout << "\nMang duong dai nhat: \n";
	for (int i = m; i <= n; i++)
		cout << setw(8) << b[i];
	return 0;
}