#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float a[], int& n);
void LietKe(float a[], int n);

int main()
{
    float a[500];
	int k;
	Nhap(a, k);
	LietKe(a, k);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n : ";
	cin >> n;
	for (int i = 0; i <= n-1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void LietKe(float a[], int n)
{
	cout << "Cac so duong cua mang: ";
	for (int i = 0; i <= n - 1; i++)
		if (a[i] > 0)
			cout << setw(8) << setprecision(5) << a[i];
}