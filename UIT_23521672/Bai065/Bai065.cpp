#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void nhap(float a[], int& n)
{
	cout << "nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (100 + 1) - (50.1);
	}
}

void xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(8) << a[i];
	}
}

int DemPhanBiet(float a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n ; i++)
	{
		bool flag = true;
		for (int j = 0; j < i; j++)
		{
			if (a[j] == a[i])
				flag = false;
		}
		if (flag == true)
			dem++;
	}
	return dem;
}

int main()
{
	float b[100];
	int k;
	nhap(b, k);
	cout << "Mang ban dau: \n";
	xuat(b, k);
	cout << "\nSo luong phan biet: " << DemPhanBiet(b, k);
	return 0;
}