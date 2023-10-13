#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int a[], int& n);
int DemGiaTri(int[], int n);

int main()
{
	int a[500];
	int k;
	Nhap(a, k);
	cout << "So cac gia tri co chu so tan cung la 5: " << DemGiaTri(a, k);
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

int DemGiaTri(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (abs(a[i]) % 10 == 5)
			dem++;
	return dem;
}