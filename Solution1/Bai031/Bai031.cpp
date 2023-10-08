#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void CapSo(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);
	CapSo(b, k);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void Xuat(float a[], int n)
{
	cout << "Mang da nhap: ";
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];
}

void CapSo(float a[], int n)
{
	cout <<endl<< "Cac cap so thoa dieu kien: ";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i != j && a[i] < a[j])
				cout <<setw(8) <<"{" << a[i]<<", " << a[j] << "}";
		}
	}
}
