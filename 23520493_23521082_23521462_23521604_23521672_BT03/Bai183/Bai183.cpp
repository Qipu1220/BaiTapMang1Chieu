#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int ktCon(int[], int, int[], int);

int main()
{
	int a[10], b[10];
	int n, m;
	cout << "Nhap mang a:";
	Nhap(a, n);
	cout << "Nhap mang b:";
	Nhap(b, m);
	cout << "Mang a co phai con trong mang b hay khong?: " <<ktCon(a,n,b,m)<< endl;
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu=";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "[" << i << "]=";
		cin >> a[i];
	}
}
void Xuat(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << "[" << i << "]=" << a[i] << endl;
}
int ktCon(int a[], int n, int b[], int m)
{
	if (n > m)
		return 0;
	int flag = 0;
	for (int vt = 0; vt <= m - n; vt++)
	{
		int co = 1;
		for (int i = 0; i < n; i++)
			if (a[i] != b[vt + i])
				co = 0;
		if (co == 1)
			flag = 1;
	}
	return flag;
}