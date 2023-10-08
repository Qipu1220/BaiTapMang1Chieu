#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void CucTri(float[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);
	CucTri(b, k);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void Xuat(float a[], int n)
{
	cout << "Mang da nhap: ";
	for (int i = 0; i < n; i++)
	{
		cout << setw(8) << a[i];
	}
}

void CucTri(float a[], int n)
{
	int dem = 0;
	cout <<endl<< "Cuc tri cua mang la: ";
	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] > a[i + 1] && a[i] > a[i - 1] || a[i] < a[i + 1] && a[i] < a[i - 1])
		{
			cout << setw(8) << a[i];
			dem++;
		}
	}
	if (n == 1)
			cout << a[0];
	if (dem == 0 && n != 1)
		cout << "Mang khong co cuc tri";
}
