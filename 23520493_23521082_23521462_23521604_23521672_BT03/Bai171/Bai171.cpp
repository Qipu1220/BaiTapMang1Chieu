#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);

int main()
{
	float b[100];
	int n;
	Nhap(b, n);
	Xuat(b,n );
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		float x;
		cout << "a[" << i << "]: ";
		cin >> x;
		for (int j = i-1; j>=0; j--)
		{
			if(j == i -1)
				a[j + 1] = x;
			if (a[j] < x)
			{
				a[j + 1] = a[j];
				a[j] = x;
			}
			else
				if(j == i-1)
					a[j + 1] = x;
		}
		if (i == 0)
			a[i] = x;
	}
}

void Xuat(float a[], int n)
{
	cout << "Mang giam: ";
	for (int i = 0; i < n; i++)
	{
		cout << setw(8) << a[i];
	}
}