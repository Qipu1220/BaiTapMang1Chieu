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
		a[i] = rand() % (200 + 1) - 100;
}

void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];
}

int HangChuc(int n)
{
	int t = abs(n);
	return (t / 10) % 10;
}

int Tong(int a[], int n)
{
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		if (HangChuc(a[i]) == 5)
			tong += a[i];
	}
	return tong;
}

int main()
{
	int b[100];
	int k;
	nhap(b, k);
	cout << "Mang ban dau: \n";
	xuat(b, k);
	cout << "\nTong cac chu so hang chuc: " << Tong(b, k);
	return 0;
}