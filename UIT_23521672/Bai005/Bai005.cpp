#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void nhap(int a[], int& n);
void xuat(int a[], int n);
void LietKeChan(int a[], int n);

int main()
{
	int b[100];
	int m;

	nhap(b, m);
	cout << "mang ban dau: \n";
	xuat(b, m);
	cout << "\nSo chan co trong mang la: \n";
	LietKeChan(b, m);

	return 0;
}

void nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (100 + 1);
	}
}

void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(8) << a[i];
	}
}

void LietKeChan(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
			cout << setw(8) << a[i];
	}
}
