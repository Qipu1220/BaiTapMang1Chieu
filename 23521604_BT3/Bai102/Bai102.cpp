#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int a[], int& n);
bool ktHoanThien(int);
int HoanThienDau(int[], int);
int TimGiaTri(int a[], int n);

int main()
{
	int a[500];
	int k;
	Nhap(a, k);
	cout << "So hoan thien nho nhat la : " << TimGiaTri(a, k);
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n : ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

bool ktHoanThien(int k)
{
	int s = 0;
	for (int i = 1; i < k; i++)
		if (k % i == 0)
			s = s + i;
	if (s == k)
		return true;
	return false;
}

int HoanThienDau(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (ktHoanThien(a[i]) == 1)
			return a[i];
	return -1;
}

int TimGiaTri(int a[], int n)
{
	int lc = HoanThienDau(a, n);
	if (lc == -1)
		return -1;
	for (int i = 0; i < n; i++)
		if (ktHoanThien(a[i]) == 1 && a[i] < lc)
			lc = a[i];
	return lc;
}