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

int Tong(int a[], int n)
{
	int s = 0;
	if (a[0] < a[1])
		s += a[0];
	for (int i = 1; i < n - 1; i++)
	{
		if (a[i] < a[i - 1] && a[i] < a[i + 1])
			s += a[i];
	}
	if (a[n - 1] < a[n - 2])
		s += a[n - 1];
	return s;
}

int main()
{
	int b[100];
	int k;
	nhap(b, k);
	cout << "Mang ban dau: \n";
	xuat(b, k);
	cout << "\nTong cac gia tri: "<<Tong(b, k);
	return 0;
}