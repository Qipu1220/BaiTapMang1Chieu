#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool KTNguyenTo(int);
void LietKeNT(int[], int);
float TBCNT(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);
	LietKeNT(b, k);
	cout <<endl<< "Trung binh cong cac so nguyen to trong mang: "<<fixed<< setprecision(1)<< TBCNT(b, k);
	return 0;
}


void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void Xuat(int a[], int n)
{
	cout << "Mang da nhap: ";
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];
}

bool KTNguyenTo(int nn)
{
	int dem = 0;
	for (int i = 1; i <= nn; i++)
	{
		if (nn % i == 0)
			dem++;
	}
	if (dem == 2)
		return true;
	else
		return false;
}

void LietKeNT(int a[], int n)
{
	cout <<endl<< "Cac so nguyen to co trong mang: ";
	for (int i = 0; i < n; i++)
	{
		if (KTNguyenTo(a[i]))
			cout << setw(8) << a[i];
	}
}

float TBCNT(int a[], int n)
{
	float s = 0;
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (KTNguyenTo(a[i]))
		{
			s += a[i];
			dem++;
		}
	}
	return (s / dem);
}
