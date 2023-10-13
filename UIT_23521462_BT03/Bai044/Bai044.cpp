#include <iostream>
#include <cmath>
#include <array>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

void NhapMang(int[], int);
void Xuat(int[], int);
int TongCucDai(int[], int);
int TongCucTieu(int[], int);
int TongCucTri(int[], int);

void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap phan tu a[" << i << "]=";
		cin >> a[i];
	}
}

int TongCucDai(int a[], int n) {
	if (n <= 1)
		return 0;
	int s = 0;
	if (a[0] > a[1])
		s = s + a[0];
	for (int i = 1; i <= n - 2; i++)
		if (a[i] > a[i - 1] && a[i] > a[i + 1])
			s = s + a[i];
	if (a[n - 1] > a[n - 2])
		s = s + a[n - 1];
	return s;
}int TongCucTieu(int a[], int n) {
	if (n <= 1)
		return 0;
	int s = 0;
	if (a[0] < a[1])
		s = s + a[0];
	for (int i = 1; i <= n - 2; i++)
		if (a[i] < a[i - 1] && a[i] < a[i + 1])
			s = s + a[i];
	if (a[n - 1] < a[n - 2])
		s = s + a[n - 1];
	return s;
}
int TongCucTri(int a[], int n) {
	int s1 = TongCucDai(a, n);
	int s2 = TongCucTieu(a, n);
	return (s1 + s2);
}
void Xuat(int a[], int n) {
	cout << setw(4) << TongCucTri(a, n);
}
int main() {
	int a[500];
	int n;
	cout << "Nhap so luong phan tu mang: ";
	cin >> n;
	NhapMang(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	return 0;
}
