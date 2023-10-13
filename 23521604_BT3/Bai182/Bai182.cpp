#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int a[], int& n);
int ktCon(int[], int, int, int);
void LietKe(int[], int);

int main()
{
	int a[500];
	int k;
	Nhap(a, k);
	LietKe(a, k);
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n : ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

int ktCon(int a[], int n, int vt, int l)
{
	int flag = 1;
	for (int i = 0; i <= l - 2; i++)
		if (a[vt + i] > a[vt + i + 1])
			flag = 0;
	return flag;
}

void LietKe(int a[], int n)
{
	int ln = LonNhat(a, n);
	for (int l = 1; l <= n; l++)
	{
		for (int vt = 0; vt <= n - l; vt++)
		{
			if (ktCon(a, n, vt, l)&&a[vt+l-1]==ln)
			{
				for (int i = 0; i < l; i++)
					cout << setw(3) << a[vt + i];
				cout << endl;
			}
		}
	}
}

int LonNhat(int a[], int n)
{
	int lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] > lc)
			lc = a[i];
	return lc;
}