#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void LietKe(int[], int);
int ktCon(int[], int, int, int);
int TongCon(int[], int, int, int);

int main()
{
	int a[10];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau:" << endl;
	Xuat(a, n);
	cout << "Cac mang con tang va tong cua chung: " << endl;
	LietKe(a, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n=";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
}
void Xuat(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << "a[" << i << "]=" << a[i] << endl;
}
int ktCon(int a[], int n, int vt, int l)
{
	int flag = 1;
	for (int i = 0; i <= l - 2; i++)
		if (a[vt + i] > a[vt + i + 1])
			flag = 0;
	return flag;
}
int TongCon(int a[], int n, int vt, int l)
{
	int s = 0;
	for (int i = 0; i <= l - 1; i++)
		s += a[vt + i];
	return s;
}
void LietKe(int a[], int n)
{
	for (int l = 1; l <= n; l++)
		for (int vt = 0; vt < n; vt++)
			if (ktCon(a, n, vt, l) == 1)
			{
				cout << TongCon(a, n, vt, l);
				for (int i = 0; i < l; i++)
					cout << setw(8) << a[vt + i];
				cout << "\n";
			}
}