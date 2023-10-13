#include <iostream>
#include <cmath>
#include <array>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

void NhapMang(float[], int);
void Xuat(float[], int);
int VTAmDau(float[], int);
int TimViTri(float[], int);

void NhapMang(float a[], int n) {
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap phan tu a[" << i << "]=";
		cin >> a[i];
	}
}
int VTAmDau(float a[], int n) {
	for (int i = 0; i < n; i++)
		if (a[i] < 0)
			return i;
	return -1;
}
int TimViTri(float a[], int n) {
	int lc = VTAmDau(a, n);
	if (lc == -1)
		return -1;
	for (int i = 0; i < n; i++)
		if (a[i] < 0 && a[i] > a[lc])
			lc = i;
	return lc;
}
void Xuat(float a[], int n) {
	cout << setw(4) << setprecision(3) << TimViTri(a, n);
}
int main() {
	float a[500];
	int n;
	cout << "Nhap so luong phan tu mang: ";
	cin >> n;
	NhapMang(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	return 0;
}
