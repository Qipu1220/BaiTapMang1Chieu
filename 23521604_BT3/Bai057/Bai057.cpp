#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int a[], int& n);
int DemChan(int[], int n);
int DemLe(int[], int n);
void TuongQuanChanLe(int a[], int n);

int main()
{
	int a[500];
	int k;
	Nhap(a, k);
	TuongQuanChanLe(a, k);
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

int DemChan(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] % 2 == 0)
			dem++;
	return dem;
}

int DemLe(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] % 2 != 0)
			dem++;
	return dem;
}

void TuongQuanChanLe(int a[], int n)
{
	int x = DemChan(a, n);
	int y = DemLe(a, n);
	if (x > y)
		cout << "Chan nhieu hon le";
    else 
		if (x < y)
		    cout << "Le nhieu hon chan";
	else
	    if (x = y)
		    cout << "Chan le bang nhau";
}