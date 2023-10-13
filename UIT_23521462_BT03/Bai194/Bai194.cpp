#include <iostream>
#include <cmath>
#include <stdio.h>
#include <iomanip>
using namespace std;

void Nhap(float a[], int n) {
	cout << "Nhap lan luot X va Y: " << endl;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
void TinhToan(float a[], int n, float b[]) {
	float kc;
	for (int i = 0; i <= n-2; i=i+2) {
		kc = sqrt(pow(a[i], 2) + pow(a[i + 1], 2));
		int j = i / 2;
		b[j] = kc;
	}
}
void InterchangeSort(float b[], int n) {
	
	int i, j;
	for (j = 0; j < n - 1; j++) {
		for (i = j + 1; i < n; i++) {
			if (b[j] < b[i]) {
				swap(b[j], b[i]);
			}
		}
	}
}
void XuatDapAn(float b[], int n) {
	for (int i = 0; i < n / 2; i++)
		cout << setw(4) << setprecision(3) << b[i] << "  ";
}
int main()
{
	float a[500];
	float b[500];
	int n;

	cout << "Nhap tong so phan tu cua X va Y (phai la so chan) : ";
	cin >> n;
	Nhap(a, n);
	TinhToan(a, n, b);
	InterchangeSort(b, n);
	XuatDapAn(b, n);
	cout << endl;
	return 0;
}