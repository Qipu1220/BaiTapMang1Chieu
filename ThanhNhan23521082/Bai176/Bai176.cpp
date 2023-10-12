#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void LietKe(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);
	cout << endl;
	LietKe(b, k);
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

void LietKe(int a[], int n)
{
	for (int l = 3; l <= n; l++)
	{
		for (int vt = 0; vt <= n - l; vt++) // n - l:  vi tri bat dau mang con cuoi cung 
		{
			for (int i = 0; i < l; i++)
			{
				cout << setw(8) << a[vt + i];
			}
			cout << endl;
		}
	}
}