#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool KT5m(int);
int Max5m(int[], int);


int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);
	cout <<endl<< "So co dang 5^m lon nhat: " << Max5m(b, k);
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
		cout << setw(8) << a[i];
	}
}

bool KT5m(int n)
{
	int t = n; 
	int flag = true;
	if (n < 1)
		return false;
	while (t > 1)
	{
		int du = t % 5;
		if (du != 0)
			flag = false;
		t = t / 5;
	}
	return flag;
}

int Max5m(int a[], int n)
{
	int lc = 0;
	for (int i = 0; i < n; i++)
	{
		if (KT5m(a[i]) && a[i] > lc)
		{
			lc = a[i];
		}
	}
	return lc;
}