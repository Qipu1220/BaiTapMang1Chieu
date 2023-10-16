#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void ConLonNhat(float[], int, int&, int&);
float TongCon(float[], int, int, int);

int main()
{
	float a[10];
	int n;
	int vtd, vtc;
	Nhap(a, n);
	cout << "Mang ban dau:" << endl;
	Xuat(a, n);
	cout << "mang con co tong lon nhat trong mang: " << endl;
	ConLonNhat(a, n, vtd,vtc);
	cout << "Vi tri dau:" << vtd << endl;
	cout << "Vi tri cuoi:" << vtc;
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
float TongCon(float a[], int n, int vt, int l)
{
	float s = 0;
	for (int i = 0; i <= l - 1; i++)
		s += a[vt + i];
	return s;
}
void ConLonNhat(float a[], int n, int& vtd, int& vtc)
{
	vtd = vtc = 0;
	float sln = a[0];
	for (int l = 1; l <= n; l++)
		for (int vt = 0; vt < n-l; vt++)
			if (TongCon(a, n, vt, l) > sln)
			{
				vtd = vt;
				vtc = vt + l - 1;
				sln = TongCon(a, n, vt, l);
			}
}