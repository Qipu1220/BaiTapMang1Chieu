#include <iostream>
#include <iomanip>
#include <cstring>
void Nhap(float[], int&);
void Xuat(float[], int);
void DaoMang(float[], int);
void DaoDuong(float[], int);
using namespace std;

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);
	DaoDuong(b, k);
	cout << endl;
	Xuat(b, k);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

void Xuat(float a[], int n)
{
	cout << "Mang : ";
	for (int i = 0; i < n; i++)
	{
		cout << fixed << setw(8)<< setprecision(1)<< a[i];
	}
}

void DaoMang(float a[], int n)
{
	int c = 0;
	int d = n - 1;
	while (c < d)
	{
		float temp = a[c];
		a[c] = a[d];
		a[d] = temp;
		c++;
		d--;
	}
}

void DaoDuong(float a[], int n)
{
	float v[100];
	int u = 0;
	for (int i = 0; i < n; i++)
	{
		//rut cac gia tri duong ra
		if (a[i] > 0)
		{
			v[u] = a[i];
			u++;
		}
	}
	DaoMang(v, u); //Dao cac gia tri duong trong mang moi rut
	// Nhap mang v vao lai mang a
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
			a[i] = v[u++];
	}
}