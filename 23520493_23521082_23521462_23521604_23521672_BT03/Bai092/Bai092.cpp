#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int a[], int& n);
int ChuSoDau(int);
int TimGiaTri(int[], int);

int main()
{
	int a[500];
	int k;
	Nhap(a, k);
	cout << "Gia tri thoa man la : " << TimGiaTri(a, k);
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

int ChuSoDau(int n)
{
	int t = abs(n);
	while (t >= 10)
		t = t / 10;
	return t;
}

int TimGiaTri(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (ChuSoDau(a[i])%2==1)
			return a[i];
	return 0;
}