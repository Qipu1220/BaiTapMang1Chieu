#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void nhap(int a[], int& n)
{
	cout << "\nnhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (100 + 1) - (50.1);
	}
}

void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(8) << a[i];
	}
}

int TanSuat(int a[], int n,int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i]==x)
			dem++;
	}
	return dem;
}

int ktThuoc(int a[], int n, int b[], int m)
{
	int flag = 1;
	for (int i = 0; i < n; i++)
	{
		if (TanSuat(b, m, a[i]) == 0)
			flag = 0;
	}
	return flag;
}

int main()
{
	int b[100];
	int k;
	nhap(b, k);
	cout << "Mang 1: \n";
	xuat(b, k);
	int a[100];
	int h;
	nhap(a, h);
	cout << "Mang 2: \n";
	xuat(a, h);
	cout << "\nMang 1 co thuoc mang 2 khong: \n" << ktThuoc(b, k,a,h);
	return 0;
}