#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;

void Nhap(float a[], int n) {
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
void ThemVT(float a[], int& n, float x,int VT) {
	for (int i = n; i >= VT+1; i--)
		a[i] = a[i-1];
	a[VT] = x;
	n++;
}
void Xuat(float a[], int n) {
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}
int main()
{
	float a[500];
	int n;
	float x;
	
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	Nhap(a, n);
	cout << "\nNhap phan tu can them: ";
	cin >> x;
	int VT;
	do
	{
		cout << "\nNhap vi tri can them; ";
		cin >> VT;
		if (VT < 0 || VT >= n)
		{
			cout << "\nVi tri can them can nam trong doan 0 den n ";
		}
	} while (VT < 0 || VT >= n);
	ThemVT(a , n, x, VT);
	Xuat(a, n);
	cout << endl;
	return 0;
}