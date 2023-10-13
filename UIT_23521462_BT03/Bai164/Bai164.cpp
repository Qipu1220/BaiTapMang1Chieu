#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;
int KTNguyenTo(int n) {
	if (n < 2)
		return 0;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return 0;
	return 1;
}
void Xoa1PhanTu(int a[], int& n, int VT) {
	for (int i = VT; i < n; i++)
	{
		a[i] = a[i + 1];

	}
	n--;
}
void XoaCacSoNguyenTo(int a[], int& n) {
	for (int i = 0; i < n; i++)
	{
		if (KTNguyenTo(a[i]) == 1)
		{
			Xoa1PhanTu(a, n, i);
			i--;
		}
	}
}
void Xuat(int a[], int n) {
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}
int main()
{
	cout << "Xoa cac so nguyen to trong mang" << endl;
	int a[500];
	int i, n, x;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << "Cac phan tu vua nhap la: ";
	Xuat(a, n);
	cout << endl << endl;
	XoaCacSoNguyenTo(a, n);
	cout << "\nMang sau khi xoa: ";
	Xuat(a, n);
	cout << endl;
	return 0;

}