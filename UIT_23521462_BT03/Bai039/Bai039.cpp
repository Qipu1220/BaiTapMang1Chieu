#include <iostream>
#include <cmath>
#include <array>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

void NhapMang(int[], int);
int ChuSoDau(int);
void Xuat(int[], int);
int TongGiaTri(int[], int);

void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap phan tu a[" << i << "]=";
		cin >> a[i];
	}
}

int ChuSoDau(int n) {
	int t = abs(n);
	while (t >= 10)
		t = t / 10;
	return t;
}
int TongGiaTri(int a[], int n) {
	int s = 0;
	for (int i = 0; i <= n - 1; i++)
		if (ChuSoDau(a[i]) % 2 == 0)
			s = s + a[i];
	return s;
}
void Xuat(int a[], int n) {
		cout  <<setw(4)<< TongGiaTri(a,n);
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
