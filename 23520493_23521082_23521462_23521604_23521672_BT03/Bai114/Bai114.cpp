#include <iostream>
#include <cmath>
#include <array>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

void NhapMang(int[], int);
void Xuat(int[], int);
int VTDuongDau(int[], int);
int VTDuongNhoNhat(int[], int);
int TimChuSo(int[], int);

void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap phan tu a[" << i << "]=";
		cin >> a[i];
	}
}
int VTDuongDau(int a[], int n){
	for (int i = 0; i <= n - 1; i++)
		if (a[i] > 0)
			return i;
	return -1;
}
int VTDuongNhoNhat(int a[], int n) {
	int lc = VTDuongDau(a, n);
	if (lc == -1)
		return -1;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] > 0 && a[i] < a[lc])
			lc = i;
	return lc;
}
int TimChuSo(int a[], int n) {
	int dem[10] = { 0,0,0,0,0,0,0,0,0,0 };
	for (int i = 0; i < n; i++) {
		if (a[i] == 0)
			dem[0]++;
		int t = abs(a[i]);
		while (t != 0) {
			int dv = t % 10;
			dem[dv]++;
			t = t / 10;
		}
	}
	return VTDuongNhoNhat(dem,10);
}
void Xuat(int a[], int n) {
	cout << setw(4) << setprecision(3) << TimChuSo(a, n);
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
