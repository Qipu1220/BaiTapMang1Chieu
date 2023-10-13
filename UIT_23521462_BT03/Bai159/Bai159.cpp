#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;

void DichPhai(float a[], int n) {
	float temp = a[n - 1];
	for (int i = n - 1; i >= 1; i--)
		a[i] = a[i - 1];
	a[0] = temp;
}
void Xuat(float a[], int n) {
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}
int main()
{
	float a[500], i, n, x;
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	cout << endl;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << "Cac phan tu vua nhap la: ";
	Xuat(a, n);
	cout << endl << endl;
	DichPhai(a, n);
	Xuat(a, n);
	cout << endl;
	return 0;

}