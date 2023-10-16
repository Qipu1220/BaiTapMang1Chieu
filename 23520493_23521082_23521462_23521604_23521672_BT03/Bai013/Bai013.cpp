#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool ktNguyenTo(int);
void LietKe(int[], int);

int main()
{
	int b[10];
	int n;
	Nhap(b, n);
	cout << "Mang ban dau:" << endl;
	Xuat(b, n);
	cout << "Cac vi tri ma gia tri tai do la so nguyen to trong mang mot chieu cac so nguyen: "<<endl;
	LietKe(b, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n=";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
}
void Xuat(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout <<  "a[" << i << "]="<<a[i] << endl;
}
bool ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}
void LietKe(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (ktNguyenTo(a[i]))
			cout <<"i="<<i << endl;
}