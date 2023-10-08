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

bool ktHoanThien(int n)
{
	int s = 0;
	for (int i = 1; i<n; i++)
	{
		if (n % i == 0)
			s = s + i;
	}
	if (s == n)
		return true;
	return false;
}

int HoanThienDau(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (ktHoanThien(a[i]))
			return a[i];
	}
	return -1;
}

int main()
{
	int b[100];
	int k;
	nhap(b, k);
	cout << "Mang ban dau: \n";
	xuat(b, k);

	cout << "\nSo hoan thien dau tien: \n" << HoanThienDau(b, k);
	return 0;
}