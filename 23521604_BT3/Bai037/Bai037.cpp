#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int a[], int& n);
bool ktDoiXung(int);
int TongDoiXung(int[], int);

int main()
{
	int a[500];
	int k;
	Nhap(a, k);
	cout << "Tong doi xung la : " << TongDoiXung(a, k);
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

bool ktDoiXung(int n)
{
	int t = abs(n);
	int dn = 0;
	while (t != 0)
	{
		dn = dn * 10 + t % 10;
		t = t / 10;
	}
	if (dn == abs(n))
		return true;
	return false;
}

int TongDoiXung(int a[], int n)
{
	int s = 0;
	for (int i = 0; i <= n - 1; i++)
		if (ktDoiXung(a[i]))
			s = s + a[i];
	return s;
}