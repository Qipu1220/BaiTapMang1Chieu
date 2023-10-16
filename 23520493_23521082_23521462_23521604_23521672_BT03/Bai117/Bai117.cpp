#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int a[], int& n);
int ktKhong(int[], int);

int main()
{
	int a[500];
	int k;
	Nhap(a, k);
	cout << ktKhong(a, k);
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

int ktKhong(int a[], int n)
{
	int flag = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] == 0)
			flag = 1;
	return flag;
}