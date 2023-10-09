#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
int Dem(float[], int);


int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);
	cout <<endl<< "Ket qua: " << Dem(b, k);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

void Xuat(float a[], int n)
{
	cout << "Xuat mang da nhap: ";
	for (int i = 0; i < n; i++)
	{
		cout << setw(8) << a[i];
	}
}

int Dem(float a[], int n)
{
	if (n <= 1)
		return 0;
	int dem = 0;
	for (int i = 1; i < n; i++)
	{
		if (abs(a[i]) > abs(a[i - 1]) && a[i] * a[i - 1] > 0)
			dem++;
	}
	return dem;
}
