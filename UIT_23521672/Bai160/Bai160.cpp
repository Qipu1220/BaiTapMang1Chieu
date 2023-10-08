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

void XoaViTi(int a[], int& n,int k)
{
	for (int i = k; i < n - 1; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}

int main()
{
	int b[100];
	int k;
	nhap(b, k);
	cout << "Mang ban dau: \n";
	xuat(b, k);
	int m;
	cout << "\nnhap phan tu xoa: ";
	cin >> m;
	XoaViTi(b, k, m);
	cout << "\nMang sau khi xoa: \n";
	xuat(b, k);
	return 0;
}