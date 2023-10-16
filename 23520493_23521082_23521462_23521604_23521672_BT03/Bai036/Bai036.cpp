#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool KTChinhPhuong(int);
void LietKe(int[], int);
int TongCP(int[], int );

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);
	LietKe(b, k);
	cout <<endl<< "Tong cac so CP cua mang: " << TongCP(b, k);
	return 0;
}


void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void Xuat(int a[], int n)
{
	cout << "Mang da nhap: ";
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];
}

void LietKe(int a[], int n)
{
	cout <<endl<< "Cac so chinh phuong cua mang: ";
	for (int i = 0; i < n; i++)
	{
		if (KTChinhPhuong(a[i]))
			cout << setw(8) << a[i];
	}
}

bool KTChinhPhuong(int nn)
{
	for (int i = 0; i * i <= nn; i++)
	{
		if (i * i == nn)
			return true;
	}
	return false;
}

int TongCP(int a[], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if (KTChinhPhuong(a[i]))
			s += a[i];
	}
	return s;
}

