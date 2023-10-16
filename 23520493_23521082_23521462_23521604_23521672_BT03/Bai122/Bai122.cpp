#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int a[], int& n);
int ktToanChan(int a[], int n);

int main()
{
	int a[500];
	int k;
	Nhap(a, k);
	cout << ktToanChan(a, k);
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

int ktToanChan(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			dem++;
	if (dem == n)
		return 1;
	return 0;
}