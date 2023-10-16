#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int KTCon(int[], int, int, int);
int LietKe(int a[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);
	cout <<endl<< "So mang con co gia tri giam dan la: " << LietKe(b, k);
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

int KTCon(int a[], int n, int vt, int l)
{
	int flag = 1;
	for (int i = 0; i <= l-2; i++)
	{
		if (a[vt + i] < a[vt + i + 1])
			flag = 0;
	}
	return flag;
}

int LietKe(int a[], int n)
{
	int dem = 0;
	for (int l =1; l <= n; l++)
	{
		for (int vt = 0; vt <= n - l; vt++)
		{
			if (KTCon(a, n, vt, l) == 1)
				dem++;
		}
	}
	return dem;
}