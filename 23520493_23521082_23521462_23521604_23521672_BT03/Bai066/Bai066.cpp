#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool KTNguyenTo(int);
int Dem(int[], int);
void LietKe(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);
	LietKe(b, k);
	cout << "Co " << Dem(b, k) << " so nguyen to xuat hien trong mang";
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
	cout << "Xuat mang da nhap: ";
	for (int i = 0; i < n; i++)
	{
		cout << setw(8) << a[i];
	}
}

bool KTNguyenTo(int n)
{
	int s = 0; 
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			s++;
	}
	if (s == 2)
		return true;
	else
		return false;
}

void LietKe(int a[], int n)
{
	cout << endl << "Xuat so nguyen to: ";
	for (int i = 0; i < n; i++)
	{
		if (KTNguyenTo(a[i]))
			cout << setw(8) << a[i];
	}
}



int Dem(int a[], int n)
{
	
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		int flag = 1;
		for (int j = 0; j < i; j++)
		{
			if (a[i] == a[j])
				flag = 0;
		}
		if (KTNguyenTo(a[i]) && flag == 1)
			dem++;
	}
	return dem;
}
