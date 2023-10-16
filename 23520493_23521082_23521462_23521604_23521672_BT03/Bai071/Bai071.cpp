#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
void Nhap(int[], int&,string);
void Xuat(int[], int,string);
int DemXuatHien(int[], int, int[], int);

int main()
{
	int b[100];
	int c[100];
	int k;
	int l;
	Nhap(b, k,"1");
	Xuat(b, k, "1");
	cout << endl;
	Nhap(c, l,"2");
	Xuat(b, k, "2");
	cout <<endl<< "So lan mang nay xuat hien trong mang kia la: " << DemXuatHien(b, k, c, l);
	return 0;
}

void Nhap(int a[], int& n,string p)
{
	cout << "Nhap so phan tu cua mang "<<p<<": ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

void Xuat(int a[], int n,string p)
{
	cout << "Xuat mang "<<p<<" da nhap : ";
	for (int i = 0; i < n; i++)
	{
		cout << setw(8) << a[i];
	}
}

int DemXuatHien(int a[], int n, int b[], int m)
{
	int dem = 0;
	if (m > n)
	{
		for (int vt = 0; vt <= m - n; vt++)
		{
			int flag = 1;
			for (int i = 0; i < n; i++)
			{
				if (a[i] != b[vt + i])
					flag = 0;
			}
			if (flag == 1)
				dem++;
		}
	}
	else
	{
		for (int vt = 0; vt <= n-m; vt++)
		{
			int flag = 1;
			for (int i = 0; i < m; i++)
			{
				if (b[i] != a[vt + i])
					flag = 0;
			}
			if (flag == 1)
				dem++;
		}
	}
	return dem;
}