#include <iostream>
#include <iomanip>
using namespace std;
void Nhapa(int a[], int& n);
void Nhapb(int a[], int& n);
int TanSuat(int[], int, int);
int DemGiaTri(int[], int, int[], int);

int main()
{
	int a[500];
	int b[500];
	int n1;
	int n2;
	Nhapa(a, n1);
	Nhapb(b, n2);
	cout<<"So gia tri chi xuat hien mot trong hai mang la : "<<DemGiaTri(a, n1, b, n2);
}

void Nhapa(int a[], int& n)
{
	cout << "Nhap n1 : ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void Nhapb(int b[], int& n)
{
	cout << "Nhap n2 : ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap b[" << i << "]: ";
		cin >> b[i];
	}
}

int TanSuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] == x)
			dem++;
	return dem;
}

int DemGiaTri(int a[], int n, int b[], int m)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		int flag = 1;
		for (int j = 0; j <= i - 1; j++)
			if (a[j] == a[i])
				flag = 0;
		if (TanSuat(b, m, a[i]) == 0 && flag == 1)
			dem++;
	}
	for (int i = 0; i < m; i++)
	{
		int flag = 1;
		for (int j = 0; j <= i - 1; j++)
			if (b[j] == b[i])
				flag = 0;
		if (TanSuat(a, n, b[i]) == 0 && flag == 1)
			dem++;
	}
	return dem;
}