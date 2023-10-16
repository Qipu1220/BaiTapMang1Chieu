#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int a[], int& n);
bool ktHoanThien(int);
int ViTriCuoi(int[], int);

int main()
{
	int a[500];
	int k;
	Nhap(a, k);
	cout << "Vi tri so hoan thien cuoi cung la : " << ViTriCuoi(a, k);
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
	for (int i = 1; i < k ; i++)
		if (k % i == 0)
			s = s + i;
	if (s == k)
		return true;
	return false;
}

int ViTriCuoi(int a[], int n)
{
	for (int i = n - 1; i >= 0; i--)
		if (ktHoanThien(a[i])==true)
			return i;
	return -1;
}