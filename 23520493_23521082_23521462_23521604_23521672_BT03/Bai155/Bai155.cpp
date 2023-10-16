#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void nhap(int a[], int& n);
void xuat(int a[], int n);
void DaoMang(int a[], int n);
void DaoChan(int a[], int n);

int main()
{
	int b[100];
	int k;
	nhap(b, k);
	cout << "Mang ban dau: \n";
	xuat(b, k);
	DaoChan(b, k);
	cout << "\nMang dao chan: \n";
	xuat(b, k);
	return 0;
}

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

void DaoMang(int a[], int n)
{
	int d = 0;
	int c = n - 1;
	while (d < c)
	{
		int temp = a[d];
		a[d] = a[c];
		a[c] = a[d];
		d++;
		c--;
	}
}

void DaoChan(int a[], int n)
{
	int b[100];
	int k;
	k = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
			b[k++] = a[i];
	}
	DaoMang(b, k);
	k = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
			a[i] = b[k++];
	}
}