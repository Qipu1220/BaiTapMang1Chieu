#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void HoanVi(int& x, int& y);
int ktHoanVi(int[], int,int[],int );
void SapTang(int[], int);

int main()
{
	int a[10], b[10];
	int n, m;
	cout << "Nhap mang a" << endl;
	Nhap(a, n);
	cout << "Nhap mang b" << endl;
	Nhap(b, m);
	cout << "Mang a ban dau:" << endl;
	Xuat(a, n);
	cout << "Mang b ban dau:" << endl;
	Xuat(b, n);
	cout << "Mang b co phai hoan vi cua a hay khong?: "<< ktHoanVi(a, n, b, m) << endl;
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu trong mang=";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout <<"[" << i << "] = ";
		cin >> a[i];
	}
}
void Xuat(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << "[" << i << "]=" << a[i] << endl;
}
void HoanVi(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}
int ktHoanVi(int a[], int n, int b[], int m)
{
	if (m != n)
		return 0;
	SapTang(a, n);
	SapTang(b, m);
	int flag = 1;
	for(int i = 0; i < n; i++)
		if (a[i] != b[i])
			flag = 0;
	return flag;
}
void SapTang(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (a[i] > a[j])
				HoanVi(a[i], a[j]);
}

