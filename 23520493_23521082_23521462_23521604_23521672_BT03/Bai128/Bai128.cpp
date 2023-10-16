#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
int ktBang(float[], int);

int main()
{
	float b[10];
	int n;
	Nhap(b, n);
	cout << "Mang ban dau:" << endl;
	Xuat(b, n);
	cout << "Cac phan tu trong mang co bang nhau khong?: " << ktBang(b, n) << endl;
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n=";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
}
void Xuat(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << "a[" << i << "]=" << a[i] << endl;
}
int ktBang(float a[], int n)
{
	int flag = 1;
	for (int i = 0; i < n ; i++)
		if (a[i] != a[0])
			flag =0;
	return flag;
}

