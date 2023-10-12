#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool KTHT(int);
int KTTinhChat(int[], int);


int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);
	KTTinhChat(b, k);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void Xuat(int a[], int n)
{
	cout << "Mang da nhap: ";
	for (int i = 0; i < n; i++)
	{
		cout << setw(8) << a[i];
	}
}

bool KTHT(int n)
{
	int s = 0;
	int t = n;
	for (int i = 0; i < n; i++)
	{
		if (t % i == 0)
			s += i;
	}
	if (s == n)
		return true;
	return false;
}

int KTTinhChat(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i > n; i++)
	{
		if (KTHT(a[i]) && a[i] > 256)
			dem++;
	}
	if (dem == 0)
	{
		return 1;
	return 0;
	}
}

