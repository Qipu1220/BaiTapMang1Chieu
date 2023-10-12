#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
int DemLonNhat(float[], int);
float LonNhat(float[], int);

int main()
{
	float b[10];
	int n;
	Nhap(b, n);
	cout << "Mang ban dau:" << endl;
	Xuat(b, n);
	cout << "So lan xuat hien cua gia tri lon nhat-"<<LonNhat(b,n)<<" la " << DemLonNhat(b, n)<<" lan." << endl;

	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n=";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]=";
		cin >> a[i];
	}
}
void Xuat(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << "a[" << i << "]=" << a[i] << endl;
}
int DemLonNhat(float a[], int n)
{
	int ln = LonNhat(a, n);
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == ln)
			dem++;
	return dem;
}
float LonNhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i < n - 1; i++)
		if (a[i] > lc)
			lc = a[i];
	return lc;
}