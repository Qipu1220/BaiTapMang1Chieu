#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int a[], int& n);
int ktCSC(int a[], int n);

int main()
{
	int a[500];
	int k;
	Nhap(a, k);
	cout << ktCSC(a, k);
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

int ktCSC(int a[], int n)
{
	if (n <= 1)
		return 0;
	int flag = 1;
	for (int i = 0; i <= n - 2; i++)
		if ((a[i] - a[i + 1]) != (a[0] - a[1]))
			flag = 0;
	return flag;
}