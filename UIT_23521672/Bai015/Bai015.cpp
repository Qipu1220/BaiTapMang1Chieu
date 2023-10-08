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
		a[i] = rand() % (200 + 1) - 100;
	}
}

void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];
}

void lietke(int a[], int n, int x, int y)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] >= x && a[i] <= y)
			cout << setw(8) << a[i];
	}
}

int main()
{
	int b[100];
	int k;
	int x, y;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	nhap(b, k);
	cout << "mang ban dau: \n";
	xuat(b, k);
	cout << "\nLiet ke cac so: \n";
	lietke(b, k, x, y);
	return 0;
}