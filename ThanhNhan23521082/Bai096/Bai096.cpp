#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[],int&);
void Xuat(int[],int);
int VTSoChanDT(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);
	cout <<endl<< "Vi tri so chan dau tien la: " << VTSoChanDT(b, k);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

void Xuat(int a[], int n)
{
	cout << "Mang da nhap: ";
	for (int i = 0; i < n; i++)
	{
		cout << setw(8) << a[i];
	}
}

int VTSoChanDT(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
			return i;
	}
	return -1;
}