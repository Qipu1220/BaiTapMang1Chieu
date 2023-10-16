#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int KTDang3m(int);
void Xuat3m(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);
	Xuat3m(b, k);
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
		cout <<setw(8)<< a[i];
	}
}

int KTDang3m(int nn)
{
	if (nn < 1)
		return false;
	bool flag = true;
	int t = nn;
	int dem = 0;
	while (t > 1)
	{
		if (t % 3 != 0)
			flag = false;
		else
			dem++;
		t = t / 3;
	}
	if (flag)
		return dem;
	else
		return 0;
}

void Xuat3m(int a[], int n)
{
	cout << endl<<"Cac gia tri co dang 3^m la: ";
	for (int i = 0; i < n; i++)
	{
		if (KTDang3m(a[i])!=0)
			cout << setw(8) << a[i];
	}
	cout << endl << "Cac gia tri qui doi tuong ung: ";
	for (int i = 0; i < n; i++)
		if (KTDang3m(a[i]) != 0)
			cout << setw(8) << "3^" << KTDang3m(a[i]);
}