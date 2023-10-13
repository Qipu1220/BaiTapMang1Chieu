#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;

void Nhap(int a[], int n) {
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
void XuatCon(int a[], int n, int l) {
	for (int i = 0; i <= n - l; i++) {
		for (int j = i; j <= i + l - 1; j++)
		{
			cout << " " << a[j];
		}
		cout << endl;
	}

		
}
int main()
{
	int a[500];
	int n, l;

	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	Nhap(a, n);
	cout << "Nhap do dai cua mang con: ";
	cin >> l;
	XuatCon(a, n, l);
	cout << endl;
	return 0;
}