#include <iostream>
#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool KiemTra(int);
void LietKe(int[], int);
int Tong(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);
	LietKe(b, k);
	cout << endl << "So luong so hoan thien trong mang: " << Tong(b, k);
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
		cout << setw(8) << a[i];
}

bool KiemTra(int n)
{
	int s = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
			s = s + i;
	}
	if (s == n)
		return true;
	return false;
}

void LietKe(int a[], int n)
{
	cout << endl<< "Cac so hoan thien: ";
	for (int i = 0; i < n; i++)
	{
		if (KiemTra(a[i]))
			cout << setw(8) << a[i];
	}
}

int Tong(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (KiemTra(a[i]))
			dem++;
	}
	return dem;
}