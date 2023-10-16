#include <iostream>
#include <cmath>
#include <array>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

void NhapMang(int[], int);
void Xuat(int[], int);
void ChanTang(int[], int);
void LeTang(int[], int);
void ChanLeTang(int[], int);

void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap phan tu a[" << i << "]=";
		cin >> a[i];
	}
}
void ChanTang(int a[], int n) {
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if ((a[i] % 2)==0 && (a[j] % 2)==0 && a[i] > a[j])
				swap(a[i], a[j]);
}
void LeTang(int a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if ((a[i] % 2) != 0 && (a[j] % 2) != 0 && a[i] > a[j])
				swap(a[i], a[j]);
}
void ChanLeTang(int a[], int n) {
	ChanTang(a, n);
	LeTang(a, n);
}
void Xuat(int a[], int n) {
	for(int j=0;j<n;j++)
		cout << setw(4) << setprecision(3) << a[j];
}
int main() {
	int a[500];
	int n;
	cout << "Nhap so luong phan tu mang: ";
	cin >> n;
	NhapMang(a, n);
	ChanLeTang(a, n);
	Xuat(a, n);
	return 0;
}
