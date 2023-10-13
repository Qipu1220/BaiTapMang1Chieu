#include <iostream>
#include <cmath>
#include <array>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

void NhapMang(float[], int);
void Xuat(float[], int);
int ViTri(float[], int);

void NhapMang(float a[], int n) {
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap phan tu a[" << i << "]=";
		cin >> a[i];
	}
}

int ViTri(float a[], int n) {
	int lc = 0;
	for (int i = 0; i < n; i++)
		if (a[i] <a[lc])
			lc=i;
	return lc;
}
void Xuat(float a[], int n) {
	cout << setw(4) << setprecision(3) << ViTri(a, n);
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
