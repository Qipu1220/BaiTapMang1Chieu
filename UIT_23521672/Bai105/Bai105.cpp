#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void nhap(int a[], int& n);
void xuat(int a[], int n);
bool ktToanLe(int n);
int ToanLeDauTien(int a[], int n);
int TimGiaTri(int a[], int n);

int main()
{
	int b[100];
	int k;
	nhap(b, k);
	cout << "Mang ban dau: \n";
	xuat(b, k);
	cout << "\nGia tri toan le lon nhat: \n" << TimGiaTri(b, k);
	return 0;
}

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

bool ktToanLe (int n)
{
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			return false;
		t = t / 10;
	}
	return true;
}

int ToanLeDauTien (int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (ktToanLe(a[i]))
			return a[i];
	}
	return 0;
}

int TimGiaTri(int a[], int n)
{
	int lc = ToanLeDauTien(a, n);
	if (lc == 0)
		return 0;
	for (int i = 0; i < n; i++)
	{
		if (ktToanLe(a[i]) && a[i]>lc)
			lc = a[i];
	}
	return lc;
}