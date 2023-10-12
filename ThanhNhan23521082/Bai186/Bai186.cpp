#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void MangCon(int[], int, int, int&, int&);
int TongCon(int[], int, int vt, int l);

int main()
{
	int b[100];
	int k;
	int M = 100;
	int vtd= 0;
	int vtc = 0;
	Nhap(b, k);
	Xuat(b, k);
	cout << endl;
	MangCon(b, k,M,vtd, vtc);
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
	cout << "Mang: ";
	for (int i = 0; i < n; i++)
	{
		cout << setw(8) << a[i];
	}
}

int TongCon(int a[], int n, int vt, int l)
{
	int s = 0;
	for (int i = 0; i < l; i++)
	{
		s += a[vt + i];
	}
	return s;
}

void MangCon(int a[], int n, int M, int& vtd, int& vtc)
{
	for (int l = 1; l <= n; l++)
	{
		for (int vt = 0; vt <= n - l; vt++)
		{
			if (TongCon(a, n, vt, l) == M)
			{
				vtd = vt;
				vtc = vt + l - 1;
				cout << "VTD: " << vtd;
				cout << "\nVTC: " << vtc;
			}
		}
	}
	vtd = vtc = -1;
}