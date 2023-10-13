#include <iostream>
#include <cmath>
#include <array>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

void NhapMang(int[], int);
void Xuat(int[], int);
int ucln(int, int);
int bcnn(int, int);
int Timbcnn(int[], int);

void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap phan tu a[" << i << "]=";
		cin >> a[i];
	}
}
int ucln(int a, int b) {
	a = abs(a);
	b = abs(b);
	while (a * b != 0) {
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return (a + b);
}
int bcnn(int a, int b) {
	return abs(a * b) / ucln(a, b);
}
int Timbcnn(int a[], int n) {
	int lc = a[0];
	for (int i = 0; i < n; i++)
		lc = bcnn(lc, a[i]);
	return lc;
}
void Xuat(int a[], int n) {
	cout << setw(4) << setprecision(3) << Timbcnn(a, n);
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
